#include <iostream>
#include <vector>

using namespace std;

void ispisi(const vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

void kombinacijeZbira(const vector<int>& v, int indeks, vector<int>& komb, int zbir){
    if(zbir < 0)
        return;
    
    if(zbir == 0){
        ispisi(komb);
        return;
    }

    for(int i = indeks; i<v.size(); i++){
        komb.push_back(v[i]);
        kombinacijeZbira(v,i,komb,zbir - v[i]);
        komb.pop_back();
    }
}

void kombinacijeZbira(const vector<int>& v, int zbir){
    vector<int> komb;
    kombinacijeZbira(v, 0, komb, zbir);
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int s;
    cin >> s;

    kombinacijeZbira(v,s);

    return 0;
}