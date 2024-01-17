#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int q;
    cin >> q;


    for(int i = 0; i<q; i++){
        int t, t1, t2 ,t3;
        cin >> t >> t1 >> t2 >> t3;

        vector<bool> dp(t+1);

        for(int tt = 0; tt <= t; tt++){
            dp[tt] = (tt >= t1 && !dp[tt - t1]) ||
                     (tt >= t2 && !dp[tt - t2]) || 
                     (tt >= t3 && !dp[tt -t3]);
        }

        cout << (dp[t] ? 1 : 2) << endl;
    }

    

    return 0;
}