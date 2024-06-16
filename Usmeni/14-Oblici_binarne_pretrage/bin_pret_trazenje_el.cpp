// Program ispituje da li se element x nalazi u nizu
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binPretraga(vector<int> &niz, int n, int x){
    int l = 0, d = n - 1;
    while(l <= d){
        int s = l + (d - l) / 2;
        if(x < niz[s])
            d = s - 1;
        else if(x > niz[s])
            l = s + 1;
        else  
            return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;   
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];

    sort(begin(niz), end(niz));

    int x;
    cin >> x;

    if(binPretraga(niz, n, x))
        cout << "x se nalazi u nizu!\n";
    else 
        cout << "x se ne nalazi u nizu!\n";

    return 0;
}