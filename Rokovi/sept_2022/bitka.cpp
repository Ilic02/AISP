#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int t;
    cin >> t;

    vector<int>dp(t+1);
    for(int i = 0; i <= t; i++){
        dp[i] = 0;
        if(i >= t1)
            dp[i] = max(dp[i], dp[i-t1] + d1);
        if(i >= t2)
            dp[i] = max(dp[i], dp[i-t2] + d2);
        if(i >= t3)
            dp[i] = max(dp[i], dp[i-t3] + d3);
    }

    cout << dp[t] << endl;

    return 0;
}