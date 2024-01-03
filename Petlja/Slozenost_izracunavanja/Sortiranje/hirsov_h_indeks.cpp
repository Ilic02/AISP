#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int brojCitata = 0;

    sort(begin(v), end(v));

    while(brojCitata < n && v[brojCitata] > brojCitata){
        brojCitata++;
    }

    cout << brojCitata << endl;


    return 0;
}