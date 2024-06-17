// Program pronalazi broj koji ne dostaje u nizu od 0 do n
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];

    int zbir = 0;
    for(int i = 0; i < n; i++)
        zbir += niz[i];

    int zbirSvih = n * (n + 1) / 2;

    cout << zbirSvih - zbir << endl;

    return 0;
}