#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n; 

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(begin(v), end(v));

    int dalekovod = v[n/2];

    int duzinaKablova = 0;
    for(int i = 0; i<n; i++)
        duzinaKablova += abs(dalekovod - v[i]);

    cout << duzinaKablova << endl;

    return 0;
}