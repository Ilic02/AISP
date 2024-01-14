#include <bits/stdc++.h>

using namespace std;


void boj(map<int, int> &mapp, vector<int> &D, vector<int> &Dindex, int Li, int L, vector<int> p){
    
    int s = D.size();
    int x=0;
    int dpoz = s-1;
    for(int i = D.size()-1; i >= 0; i--){
        if(L > D[i]){
            x++;
            mapp[Dindex[dpoz]] = 0;
            dpoz--;
            
            L--;
            mapp[p[Li]] = L;
            
        }
        else if( L == D[i]){
            x++;
            mapp[Dindex[dpoz]] = 0;
            dpoz--;
            
            L = 0;
            mapp[p[Li]] = L;
            break;
        }
        else{
            D[i]--;
            mapp[Dindex[dpoz]] = D[i];
            
            L = 0;
            mapp[p[Li]] = L;
            break; 
        }
    }
    if(x == s){
    D.clear();
    Dindex.clear();
    }
    else{
    D.resize(s-x);
    Dindex.resize(s-x);
    }return;
}


int main() {
    
    int x;
    cin >> x;
    vector<int> p(x);
    vector<int> s(x);
    
    map<int, int> mapp;
    map<int, int> LD;
    map<int, int> index;
    
    for(int i = 0; i < x; i++){
        cin >> p[i];
        index[i] = p[i];
    }
    
    for(int i = 0; i < x; i++){
        cin >> s[i];
        mapp[p[i]] = s[i];
    }
    
    string str;
    cin >> str;
    
    for(int i = 0; i < x; i++){
        LD[p[i]] = str[i];
    }
    
    sort(p.begin(), p.end());
    
    
    
    vector<int> vD;
    vector<int> vL;
    vector<int> Dindex;
    
    for(int i = 0; i < x; i++){
        if(LD[p[i]] == 'D'){
        vD.push_back(mapp[p[i]]);
        Dindex.push_back(p[i]);
        }
        else{
        if(vD.size() > 0)
        boj(mapp, vD, Dindex, i, mapp[p[i]], p);
        }
    }
    
    int t = 0;
    for(int i = 0; i < x; i++){
     if(mapp[index[i]] > 0)
     cout << mapp[index[i]] << " ";
     else t++;
    }
    if(t == x)
    cout << " ";
    return 0;
}