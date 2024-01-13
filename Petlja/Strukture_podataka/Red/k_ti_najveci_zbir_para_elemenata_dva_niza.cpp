#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n,m;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];
    
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i<m; i++)
        cin >> b[i];

    int k;
    cin >> k;

    priority_queue<int> p;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            p.push(a[i]+b[j]);
        }
    }

    for(int i = 0; i<k-1; i++){
        p.pop();
    }

    cout << p.top() << endl;

    return 0;
}