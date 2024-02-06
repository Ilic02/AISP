#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1e9 + 7;

int brojParticija(int a0, int n){
    if(a0 == n)
        return 1;
    
    vector<vector<int>> raste(n+1, vector<int>(n+1, 0));
    vector<vector<int>> opada(n+1, vector<int>(n+1, 0));

    for(int z = 1; z<=n; z++){
        for(int p =1; p<z; p++){
            raste[z][p] = 0;
            for(int k = p+1; k<= z-p; k++)
                raste[z][p] = (raste[z][p] + opada[z-p][k]) % MOD;
            opada[z][p] = 0;
            for(int k = 1; k<=p-1 && k <= z-p; k++)
                opada[z][p] = (opada[z][p] + raste[z-p][k]) % MOD;
        }
        raste[z][z] = opada[z][z] = 1;
    }

    return (raste[n][a0] + opada[n][a0]) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a0;
    cin >> n >> a0;

    cout << brojParticija(a0, n) << endl;

    return 0;
}