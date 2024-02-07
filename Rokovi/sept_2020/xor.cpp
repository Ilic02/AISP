#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(begin(v), end(v));

    int t;
    cin >> t;

    int brojac = 0;
    for(int i = 0; i<n; i++)
        if(binary_search(begin(v), end(v), t^v[i]))
            brojac++;

    cout << brojac / 2 << endl;

    return 0;
}