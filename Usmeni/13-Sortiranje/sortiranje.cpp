// Program eliminise duplikate iz niza
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];

    sort(begin(niz), end(niz));

    int k = 1;
    for(int i = 1; i < n; i++)
        if(niz[i] != niz[i - 1])
            niz[k++] = niz[i];

    niz.resize(k);

    for(int i = 0; i < k; i++)
        cout << niz[i] << " ";
    cout << endl;

    return 0;
}