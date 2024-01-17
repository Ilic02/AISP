#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<vector<int>>& mat, vector<int>& zbirVrste, vector<int>& zbirKolone, int i, int j){
    int sum = 0, zero = 0;
    for(int k = 0; k<zbirVrste.size(); k++){
        sum += mat[k][j];
        if(mat[k][j] == 0)
            zero++;
    }
    if(zero == 0 && sum != zbirKolone[j])
        return false;
    if(sum > zbirKolone[j])
        return false;
    
    sum = 0;
    zero = 0;
    for(int k = 0; k<zbirKolone.size(); k++){
        sum += mat[i][k];
        if(mat[i][k] == 0)
            zero++;
    }
    if(zero == 0 && sum != zbirVrste[i])
        return false;
    
    if(sum > zbirVrste[i])
        return false;

    return true;
}

int zbirovi(vector< vector <int>>& mat, vector<int>& zbirVrste, vector<int>& zbirKolone, int k, int maksBroj){
    int i = k / zbirKolone.size();
    int j = k % zbirKolone.size();

    if(i == zbirVrste.size())
        return 1;
    
    if(mat[i][j] != 0){
        if(!check(mat,zbirVrste, zbirKolone, i, j))
            return 0;
        return zbirovi(mat, zbirVrste, zbirKolone, k+1, maksBroj);
    }
    int brojac = 0;
    for(int broj = 1; broj<=maksBroj; broj++){
        mat[i][j] = broj;
        if(check(mat, zbirVrste, zbirKolone, i, j))
            brojac += zbirovi(mat, zbirVrste, zbirKolone, k+1, maksBroj);
    }
    mat[i][j] = 0;
    return brojac;
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> zbirVrste(n);
    for(int i = 0; i<n; i++)
        cin >> zbirVrste[i];
    
    vector<int> zbirKolone(m);
    for(int i = 0; i<n; i++)
        cin >> zbirKolone[i];

    vector <vector <int>> matrica(n,vector<int>(m));
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin >> matrica[i][j];

    cout << zbirovi(matrica, zbirVrste, zbirKolone, 0, k) << endl;


    return 0;
}