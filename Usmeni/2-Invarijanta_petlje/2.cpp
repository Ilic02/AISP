// Program odredjuje minimum niza, invarijanta: nakon izvrsavanja tela petlje
// promenljiva m ima vrednost minimuma prvih i + 1 elemenata niza
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minNiza(const vector<int> &niz){
    int m = niz[0];
    for(int i = 1; i < niz.size(); i++)
        m = min(m, niz[i]);

    return m;
}

int main(){
    int n;
    cin >> n;

    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];

    cout << minNiza(niz) << endl;

    return 0;
}