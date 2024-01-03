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

    int m;
    cin >> m;

    vector<int> t(m);
    for(int i = 0; i<m; i++)
        cin >> t[i];

    sort(begin(v), end(v));
    sort(begin(t), end(t));

    if(m == n){
        if(v == t)
            cout << "da" << endl;
        else
            cout << "ne" << endl;
    }
    else
        cout << "ne" << endl;

    return 0;
}