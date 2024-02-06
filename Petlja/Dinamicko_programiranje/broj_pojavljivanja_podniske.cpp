#include<iostream>
#include <vector>

using namespace std;

long long brojPojavljivanjaPodniske(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    vector<long long> dp(m+1, 0);
    dp[0] = 1;
    for(int i = 1; i<=n; i++)
        for(int j = m; j>=1; j--)
            if(s1[i-1] == s2[j-1])
                dp[j] += dp[j-1];

    return dp[m];
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    cout << brojPojavljivanjaPodniske(s1, s2) << endl;

    return 0;
}