#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin >> mat[i][j];

    vector<vector<int>> dp(mat);
    for(int i = 1; i<n; i++)
        for(int j = 0; j<m; j++){
            int mp = dp[i-1][j];
            if(j > 0)
                mp = max(mp, dp[i-1][j-1]);
            if(j < m-1)
                mp = max(mp, dp[i-1][j+1]);
            dp[i][j] = mp + mat[i][j];
        }

    int res = *max_element(begin(dp[n-1]), end(dp[n-1]));
    cout << res << endl;


    return 0;
}