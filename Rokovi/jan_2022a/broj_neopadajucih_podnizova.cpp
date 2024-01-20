#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int ukupno = 0;
    vector<int> dp(n);
    for(int i = 0; i<n; i++){
        dp[i] = 1;
        for(int j = 0; j<i; j++)
            if(v[j] <= v[i])
                dp[i] = (dp[i] + dp[j]) % MOD;
        
        ukupno = (ukupno + dp[i]) % MOD;
    }

    cout << ukupno << endl;

    return 0;
}