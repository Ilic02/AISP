#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    vector<int> dp(n);
    for(int i = 0; i<n; i++){
        dp[i] = v[i];
        for(int j = i-1; j>=0; j--)
            if(v[j] < v[i])
            dp[i] = max(dp[i], dp[j] + v[i]);
    }

    cout << *max_element(begin(dp), end(dp)) << endl;
    return 0;
}
