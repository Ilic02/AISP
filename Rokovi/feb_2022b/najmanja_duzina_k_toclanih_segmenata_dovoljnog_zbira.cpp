#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int64_t zbir = v[0];
    int l = 0, d = 0;
    int minK = 0;
    while(d < n){
        if(zbir < t){
            d++;
            zbir += v[d];
            minK = max(minK, d - l + 1);
        }
        else{
            zbir -= v[l];
            l++;
        }
    }

    if(minK == n+1)
        cout << 0 << endl;
    else
        cout << minK << endl;

    return 0;
}