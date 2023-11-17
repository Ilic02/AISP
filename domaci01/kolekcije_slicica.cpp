#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    uint64_t k,n;
    cin >> k >> n;

    vector<uint64_t> v(n);
    for(uint64_t i = 0; i<n; i++)
        cin >> v[i];

    vector<uint64_t> ps(n+1);
    ps[0] = 0;
    for(int i = 0; i<n; i++){
        ps[i+1] = ps[i] + (k % v[i] == 0); 
    }

    uint64_t m;
    cin >> m;


    while(m--){
        uint64_t x,y;
        cin >> x >> y;

       cout << ps[y+1] - ps[x] << endl;
    }
   return 0;
}