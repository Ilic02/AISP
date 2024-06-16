// Program pronalazi prvi element koji je 
// veci ili jednak od x u sortiranom nizu
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int veciIliJednak(vector<int> &niz, int n, int x){
    int l = 0, d = n - 1;
    while(l <= d){
        int s = l + (d - l) / 2;
        if(niz[s] < x)
            l = s + 1;
        else 
            d = s - 1;
    }

    return niz[l];
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

    cout << veciIliJednak(niz, n, x) << endl;

    return 0;
}
