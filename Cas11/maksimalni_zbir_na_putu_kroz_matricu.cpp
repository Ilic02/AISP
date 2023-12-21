#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector< vector<int> > mat(n, vector<int>(n));
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            cin >> mat[i][j];

    vector< vector<int> > dp(n+1, vector<int> (n+1));

    for(int i = 1; i<= n; i++)
        for(int j = 1; j<= n; j++)
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + mat[i-1][j-1];



    cout << dp[n][n] << endl; 
    return 0;
}
