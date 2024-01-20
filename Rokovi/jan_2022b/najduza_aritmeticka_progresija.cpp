#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    if(d < 0)
        d = -d;

    sort(begin(v), end(v));
    map<int, int> duzinaDo;
    int maxDuzina = 1;
    for(int i = 0; i<n; i++)
        if(duzinaDo.find(v[i] - d) != duzinaDo.end()){
            duzinaDo[v[i]] = duzinaDo[v[i] - d] + 1;
            maxDuzina = max(maxDuzina, duzinaDo[v[i]]);
        }
        else
            duzinaDo[v[i]] = 1;

    cout << maxDuzina << endl;

    return 0;
}