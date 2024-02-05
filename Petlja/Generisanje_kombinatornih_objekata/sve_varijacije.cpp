#include <iostream>
#include <vector>

using namespace std;
void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

void obradi_sve_varijacije(int k, int n, vector<int>& v){
    if(k == 0)
        ispisi(v);
    else{
        for(int nn = 1; nn <= n; nn++){
            v[v.size() - k] = nn;
            obradi_sve_varijacije(k-1, n, v);
        }
    }
}

void obradi_sve_varijacije(int k, int n){
    vector<int> v(k);
    obradi_sve_varijacije(k, n , v);
}

int main(){
    int n, k;
    cin >> n >> k;

    obradi_sve_varijacije(k,n);


    return 0;
}