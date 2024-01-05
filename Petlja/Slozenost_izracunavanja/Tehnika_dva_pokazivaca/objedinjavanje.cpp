#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int m;
    cin >> m;

    vector<int> a(m);
    for(int i = 0; i<m; i++)
        cin >> a[i];

    int n;
    cin >> n;

    vector<int> b(n);
    for(int i = 0; i<n; i++)
        cin >> b[i];
    

    vector<int> t;
    for(int i = 0; i<m; i++)
        t.push_back(a[i]);

    for(int i = 0; i<n; i++)
        t.push_back(b[i]);

    sort(begin(t), end(t));

    for(int i = 0; i<n+m; i++)
        cout << t[i] << " ";
    cout << endl;



    return 0;
}