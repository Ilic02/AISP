#include <iostream>
#include <vector>

using namespace std;

int maksZbir(vector<vector<int>>& v){
    int n = v.size();
    vector<int> dp(n);
    dp[0] = v[0][0];
    for(int k = 1; k < n; k++)
        dp[k] = dp[k-1] + v[0][k];
    for(int i = 1; i<n; i++){
        dp[0] += v[i][0];
        for(int k = 1; k<n; k++)
            dp[k] = max(dp[k] + v[i][k], dp[k-1] + v[i][k]);
    }
    return dp[n-1];
}

int main(){
    int n;
    cin >> n;

    vector<vector <int>> v(n, vector<int>(n));
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            cin >> v[i][j];

    cout << maksZbir(v) << endl;

    return 0;
}