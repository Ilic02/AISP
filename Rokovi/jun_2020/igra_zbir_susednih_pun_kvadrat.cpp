#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

bool potpun_kvadrat(int x){
    int koren = (int)round(sqrt(x));
    return koren * koren == x;
}

bool resi(vector<int>& v, int i, int m){
    if(i == v.size())
        return true;
    
    if(v[i] > 0){
        if(potpun_kvadrat(v[i] + v[i-1]))
            return resi(v, i+1, m);
        else
            return false;
    }

    for(int j = (int)sqrt(v[i-1]) + 1; j*j-v[i-1] <= m; j++){
        v[i] = j * j - v[i-1];
        if(resi(v, i+1, m))
            return true;
    }
    v[i] = 0;
    return false;
}

bool resi(vector<int>& v, int m){
    if(v[0] > 0)
        return resi(v, 1, m);

    for(int j = 1; j<=m; j++){
        v[0] = j;
        if(resi(v, 1, m))
            return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    if(resi(v, m))
        ispisi(v);
    else
        cout << "-1\n";

    return 0;
}
