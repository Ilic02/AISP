#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int64_t MOD = 1e9 + 9;

int64_t brojStabala(int n, vector<int64_t>& memo){
    if(n == 0 || n == 1)
        return memo[n] = 1;

    if(memo[n] != 0)
        return memo[n];
    
    for(int i = 0; i<n; i++)
        memo[n] += brojStabala(n-i-1, memo) * brojStabala(i, memo) % MOD;

    return memo[n];
}



int main(){
    int n;
    cin >> n;

    vector <int64_t> memo(n+1, 0);
    cout << brojStabala(n, memo) << endl;


    return 0;
}