#include <iostream>
#include <vector>

using namespace std;

int najduzi_rastuci_podniz(vector<int>& v){
    int n = v.size();
    vector<int> dp(n);

    for(int i = 0; i<n; i++){
        dp[i] = 1;
        for(int j = 0; j<i; j++)
            if(v[i] > v[j] && dp[j] + 1 > dp[i])
                dp[i] = dp[j] + 1;
    }
    int maks = dp[0];
    for(int i = 0; i<n; i++)
        if(dp[i] > maks)
            maks = dp[i];

    return maks;
}


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    cout << najduzi_rastuci_podniz(v) << endl;
    return 0;
}
