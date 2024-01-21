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

    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = max(v[0] + v[1], 0);
    for(int i = 2; i<n; i++)
        dp[i] = max(dp[i-1], dp[i-2] + v[i-1] + v[i]);
    
    cout << dp[n-1] << endl;

    return 0;
}