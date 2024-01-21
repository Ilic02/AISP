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

    vector<int> s = v;
    sort(begin(s), end(s));

    for(int x : v)
        cout << (lower_bound(begin(s), end(s), x) - begin(s)) << " ";
    cout << endl;



    return 0;
}