#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    vector<vector<int>> dp(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        dp[i][0] = 1;
    for (int j = 0; j < n; j++)
        dp[0][j] = 1;

    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            if (v[i - 1][j] == v[i][j] &&
                v[i][j - 1] == v[i][j] &&
                v[i - 1][j - 1] == v[i][j])
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            else
                dp[i][j] = 1;

    int maxD = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            maxD = max(maxD, dp[i][j]);

    cout << maxD << endl;

    return 0;
}