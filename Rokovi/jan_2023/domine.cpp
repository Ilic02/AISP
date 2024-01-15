#include <iostream>
#include <vector>

const int MOD = 1000000007;

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> dp(n, 0);
    dp[0] = 1;
    for (int i = 1; i < n; i++)
        for (int j = i - 1; j >= 0; j--)
            if (j + v[j] >= i)
                dp[i] = (dp[i] + dp[j]) % MOD;

    cout << dp[n - 1] << endl;

    return 0;
}
