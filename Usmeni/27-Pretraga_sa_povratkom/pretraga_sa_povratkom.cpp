// Odrediti sve rasporede n dama na sahovskoj tabli dimenzije 
// n*n tako da se nikoje dve dame ne napadaju
#include <iostream>
#include <vector>

using namespace std;

void ispisi(const vector<int> &niz){
    for(int x : niz)
        cout << (x + 1) << " ";
    cout << endl;
}

bool dameSeNapadaju(const vector<int> &kolone, int v){
    for(int vi = 0; vi < v; vi++){
        if(kolone[vi] == kolone [v])
            return true;
        if(abs(v - vi) == abs(kolone[v] - kolone[vi]))
            return true;
    }
    return false;
}

void nDama(vector<int> &kolone, int v){
    if(v == kolone.size())
        ispisi(kolone);
    else{
        for(int k = 0; k < kolone.size(); k++){
            kolone[v] = k;
            if(!dameSeNapadaju(kolone, v))
                nDama(kolone, v + 1);
        }
    }
}

void nDama(int n){
    vector<int> kolone(n);
    nDama(kolone, 0);
}