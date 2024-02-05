#include <iostream>
#include <vector>

using namespace std;

void ispisi(vector<int>& v,int n){
    for(int i = 0; i<n; i++)   
        cout << v[i] << " "; 
    cout << endl;
}

void obradi_sve_podskupove(vector<int>& v, int i, vector<int>& p, int j){
    if(i == v.size())
        ispisi(p,j);
    else{
        obradi_sve_podskupove(v, i+1, p ,j);
        p[j] = v[i];
        obradi_sve_podskupove(v, i+1, p, j+1);
    }
}

void obradi_sve_podskupove(vector<int>& v){
    vector<int> p(v.size());
    obradi_sve_podskupove(v, 0, p, 0);
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    obradi_sve_podskupove(v);
    return 0;
}