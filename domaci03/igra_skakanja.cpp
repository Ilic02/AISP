#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = a[i]; j >= 0; j--)
        {
            if (i + j < n - 1)
            {
                dp[i + j] = min(dp[i + j], 1 + dp[i]);
            }
            else
            {
                cout << 1 + dp[i] << endl;
                return 0;
            }
        }
    }

    if (dp[n - 1] != INT_MAX)
        cout << dp[n - 1] << endl;
    else
        cout << "-1" << endl;

    return 0;
}