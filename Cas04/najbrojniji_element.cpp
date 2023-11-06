#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int n;
    cin >> n;

    vector<string> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(begin(v), end(v));

    int duzina = 1, maxDuzina = 1;

    for(int i = 1; i<n; i++){
        if(v[i] != v[i-1])
            duzina = 1;
        else{
            duzina++;
            if(duzina > maxDuzina)
                maxDuzina = duzina;
        }
    }

    cout << maxDuzina << endl;

    return 0;
}