#include <iostream>
#include <vector>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int minIndeks = 1e6;
    int indeks;

    for(int i = 0; i<n; i++){
        if(v[i] == i)
            indeks = i;

        if(indeks < minIndeks)
            minIndeks = indeks;
    }

    if(minIndeks != 1e6)
        cout << minIndeks << endl;
    else
        cout << "nema" << endl;


    return 0;
}