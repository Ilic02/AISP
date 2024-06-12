// Program iterativno racuna sumu niza brojeva
#include <iostream>

using namespace std;

int zbir(int niz[], int n){
    int zbir = 0;
    for(int i = 0; i < n; i++)
        zbir += niz[i];

    return zbir;
}

int main(){
    int niz[] = {1, 4, 5, 7};
    int n = 4;

    cout << zbir(niz, n) << endl;

    return 0;
}