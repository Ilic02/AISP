#include <iostream>
#include <vector>

using namespace std;

long long brojKombinacija(int K, int N)
{
    vector<vector<long long>> dp(N + 1);
    for (int n = 0; n <= N; n++)
        dp[n].resize(n + 1);

    for (int n = 0; n <= N; n++)
    {
        dp[n][0] = 1;

        for (int k = 1; k < n; k++)
            dp[n][k] = dp[n - 1][k - 1] + dp[n - 1][k];

        dp[n][n] = 1;
    }

    return dp[N][K];
}

int main()
{
    int k, n;
    cin >> k >> n;

    cout << brojKombinacija(k, n) << endl;

    return 0;
}