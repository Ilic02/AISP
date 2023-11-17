#include <iostream>
#include <vector>
#include <algorithm>

#define N 1e6

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    uint64_t n;
    cin >> n;

    vector<uint64_t> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    uint64_t m;
    cin >> m;

    vector<uint64_t> t;

    for(int i = 1; i<N; i++){
        if(!binary_search(begin(v), end(v), i))
            t.push_back(i);
    }

    while(m--){
        uint64_t x;
        cin >> x;

        cout << t[x-1] << endl;

    }

    return 0;
}