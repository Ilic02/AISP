#include <iostream>
#include <vector>

using namespace std;
void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

void varijacije_bez_ponavljanja(vector<int>& v, int n, vector<bool>& upotrebljen, int i){
    if(i == v.size())
        ispisi(v);
    else{
        for(int x = 1; x<=n; x++)
            if(!upotrebljen[x]){
                v[i] = x;
                upotrebljen[x] = true;
                varijacije_bez_ponavljanja(v,n,upotrebljen, i+1);
                upotrebljen[x] = false;
            }
    }
}

void varijacije_bez_ponavljanja(int n, int k){
    vector<int> v(k);
    vector<bool> upotrebljen(n+1, false);
    varijacije_bez_ponavljanja(v, n, upotrebljen, 0);
}

int main(){
    int n, k;
    cin >> n >> k;

    varijacije_bez_ponavljanja(n, k);

    return 0;
}