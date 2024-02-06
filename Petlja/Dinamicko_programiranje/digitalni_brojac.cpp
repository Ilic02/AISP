#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> alociraj(int m, int n){
    vector<vector<long long>> rezultat(m);
    for(int i = 0; i<m; i++)
        rezultat[i].resize(n);
    return rezultat;
}

vector<vector<long long>> brojParticija(int maxBrojCifara, int maxZbirCifara){
    vector<vector<long long>> dp = alociraj(maxBrojCifara+1, maxZbirCifara+1);
    for(int zbirCifara = 0; zbirCifara <= maxZbirCifara; zbirCifara++)
        dp[1][zbirCifara] = zbirCifara < 10 ? 1 : 0;

    for(int brojCifara = 2; brojCifara <= maxBrojCifara; brojCifara++){
        for(int zbirCifara = 0; zbirCifara <= maxZbirCifara; zbirCifara++){
            dp[brojCifara][zbirCifara] = 0;

            for(int cifra = 0; cifra <= 9 && cifra <= zbirCifara; cifra++)
                dp[brojCifara][zbirCifara] += dp[brojCifara-1][zbirCifara-cifra];
        }
    }
    return dp;
}

long long brojBrojeva(int n){
    vector<vector<long long>> dp = brojParticija(n, 9*n);

    long long ukupnoBrojeva = 0;
    for(int zbirCifara = 0; zbirCifara <= 9*n; zbirCifara++)
        ukupnoBrojeva += dp[n][zbirCifara] * dp[n][zbirCifara];

    return ukupnoBrojeva;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << brojBrojeva(n) << endl;

    return 0;
}
