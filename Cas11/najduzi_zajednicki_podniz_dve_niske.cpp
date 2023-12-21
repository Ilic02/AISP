#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string a,b;
    cin >> a >> b;

    int N = a.size(), M = b.size();

    vector< vector<int> > dp(N + 1, vector<int>(M + 1));
    for(int n = 1; n<=N; n++){
        for(int m = 1; m<= M; m++){
            if(a[n - 1] != b[m - 1]){
                dp[n][m] = max(dp[n-1][m], dp[n][m-1]);
            }
            else
                dp[n][m] = 1 + dp[n-1][m-1];
        }
    }

    cout << dp[N][M] << endl;
    return 0;
}
