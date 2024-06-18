// Program racuna n-ti clan fibonacijevog niza
#include <iostream>
#include <vector>

using namespace std;

long Fib(int n){
    vector<long> dp(n + 1);
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}

int main(){
    int n;
    cin >> n;

    cout << Fib(n) << endl;

    return 0;
}