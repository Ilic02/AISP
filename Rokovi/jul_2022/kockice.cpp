#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000000 + 7;

int main()
{
    int n, m, s;
    cin >> n >> m >> s;

    vector<vector<int>> dp(n + 1, vector<int>(s + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= s; j++)
            for (int k = 1; k <= m; k++)
                if (k <= j)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;

    cout << dp[n][s] << endl;

    return 0;
}