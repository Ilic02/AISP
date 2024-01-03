#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    sort(begin(v), end(v));

    int brojac = 0;
    for(int i = 0; i<n; i++){
        if(v[i] != v[i+1])
            brojac++;
    }

    cout << brojac << endl;


    return 0;
}