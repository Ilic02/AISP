#include <iostream>
#include <vector>

using namespace std;

bool naTabli(int i, int j, const vector<vector<int>>& tabla){
    return i >= 0 && j >= 0 && i < tabla.size() && j < tabla[0].size();    
}

int najveciZbir(int i, int j, vector<vector<bool>>& posecen, const vector<vector<int>>& tabla){
    int rezultat = 0;
    for(int k = 0; k<8; k++){
        int di[] = {1, 1, -1, -1, 2, 2, -2, -2};
        int dj[] = {2, -2, 2, -2, 1, -1, 1, -1};
        int ni = i + di[k];
        int nj = j + dj[k];
        if(naTabli(ni, nj, tabla) && !posecen[ni][nj]){
            posecen[ni][nj] = true;
            rezultat = max(rezultat, najveciZbir(ni, nj, posecen, tabla));
            posecen[ni][nj] = false;
        }
    }
    return rezultat + tabla[i][j];
}

int najveciZbir(const vector<vector<int>>& tabla){
    int n = tabla.size();
    int m = tabla[0].size();
    vector<vector <bool>> posecen(n,vector<bool>(m));
    posecen[0][0] = true;
    return najveciZbir(0,0,posecen, tabla);
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> tabla(n, vector<int>(m));
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin >> tabla[i][j];

    cout << najveciZbir(tabla) << endl;


    return 0;
}
