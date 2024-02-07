#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int res = v[n-1] + v[n-2] + v[n-3];
    do{
        int maxSum = 0;
        for(int i = 0; i<n; i++){
            int i1 = i+1;
            if(i1 >= n)
                i1 -= n;
            int i2 = i+2;
            if(i2 >= n)
                i2 -= n;

            maxSum = max(maxSum, v[i] + v[i1] + v[i2]);
        }
        res = min(res, maxSum);
    }while(next_permutation(begin(v) + 1, end(v)));

    cout << res << endl;

    return 0;
}