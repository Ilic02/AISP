#include <iostream>
#include <vector>

using namespace std;

int main (){
    uint64_t n;
    cin >> n;

    vector<uint64_t> a(n);
    for(uint64_t i = 0; i<n; i++){
        cin >> a[i];
    }

    uint64_t duzina = 0, levo = 0, desno = 0;

    for(uint64_t i = 0; i<n; i++){
        duzina += i * a[i];
        desno += a[i];
    }

    uint64_t minDuzina = duzina;
    for(int i = 1; i<n; i++){
        levo += a[i-1];
        desno -= a[i-1];
        duzina += levo - desno;
        if(duzina < minDuzina)
            minDuzina = duzina;
    }

    cout << minDuzina << endl;

    return 0;
}