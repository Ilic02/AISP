// Program rekurzivno racuna sumu niza brojeva
#include <iostream>

using namespace std;

int zbir(int niz[], int n){
    if(n == 0)
        return 0;

    return zbir(niz, n-1) + niz[n - 1];
}

int main(){
    int niz[] = {1, 4, 5, 7};
    int n = 4;

    cout << zbir(niz, n) << endl;

    return 0;
}