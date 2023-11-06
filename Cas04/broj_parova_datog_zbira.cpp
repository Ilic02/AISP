#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(begin(v), end(v));

    int brojParova = 0;
    for(int i = 0; i<n; i++){
        if(binary_search(begin(v), end(v), s - v[i]))
            brojParova++;
    }

    cout << brojParova / 2 << endl;

    return 0;
}