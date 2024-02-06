#include <iostream>
#include <vector>

using namespace std;
const int MAX_S = 2000;
const int MAX_V = 100;
const int INF = MAX_S + 1;

int minBrojNovcica(vector<int>& v, int n, int S){
    int dp[MAX_S + 1];
    dp[0] = 0;

    for(int s = 1; s<=S; s++){
        dp[s] = INF;

        for(int i = 0; i<n; i++)
            if(v[i] <= s)
                dp[s] = min(dp[s], dp[s-v[i]] + 1);
    }

    return dp[S];
}

int main(){
    int S;
    cin >> S;

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    cout << minBrojNovcica(v,n,S) << endl;

    return 0;
}