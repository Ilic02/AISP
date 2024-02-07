#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<int, int> m;
    int brojParova0 = 0;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        brojParova0 += m[-x];
        m[x]++;
    }

    int ukupanBrojParova = n*(n-1) / 2;
    int brojParovaNe0 = ukupanBrojParova - brojParova0;

    cout << brojParovaNe0 << endl;


    return 0;
}