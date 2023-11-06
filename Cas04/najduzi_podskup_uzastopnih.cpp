#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(begin(v), end(v));
    auto it = unique(begin(v), end(v));
    v.erase(it, end(v));
    n = v.size();

    int pocetak = 0, duzina = 1;
    int maxPocetak = 0, maxDuzina = 1;

    for(int i = 1; i<n; i++){
        if(v[i] == v[i-1] + 1){
            duzina++;
            if(duzina > maxDuzina){
                maxDuzina = duzina;
                maxPocetak = pocetak;
            }
        }
        else{
            pocetak = i;
            duzina = 1;
        }
    }

    for(int i = maxPocetak; i< maxPocetak + maxDuzina; i++)
        cout << v[i] << endl;

    return 0;
}