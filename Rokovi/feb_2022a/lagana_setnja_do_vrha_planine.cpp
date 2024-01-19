#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main(int argc, char const *argv[])
{
    int m, n, d;
    cin >> m >> n >> d;

    vector<vector<int>> planina(m, vector<int>(n,0));
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            cin >> planina[i][j];

    vector<vector<int>> dp(m, vector<int>(n,0));
    dp[0][0] = 1;
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++){
            if(i > 0 && abs(planina[i][j] - planina[i-1][j]) <= d)
                dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if(j > 0 && abs(planina[i][j] - planina[i][j-1]) <= d)
                dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
            if(i > 0 && j > 0 && abs(planina[i][j] - planina[i-1][j-1]) <= d)
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
        }

    cout << dp[m-1][n-1] << endl;

    return 0;
}
