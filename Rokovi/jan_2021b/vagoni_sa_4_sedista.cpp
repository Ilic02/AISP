#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int brojRasporeda(const vector<int>& a){
    int n = a.size();
    vector<int> dp(n+1);
    dp[n] = 1;
    for(int k = n-1; k>=0; k--){
        dp[k] = 0;
        int uVagonu = 0;
        for(int i = k; i<n; i++){
            uVagonu += a[i];
            if(uVagonu > 4)
                break;
            dp[k] = (dp[k] + dp[i+1]) % MOD;
        }
    }
    return dp[0];
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    cout << brojRasporeda(v) << endl;

    return 0;
}
