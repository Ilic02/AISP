#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];

    vector<int> sortiran = a;
    sort(begin(sortiran), end(sortiran));

    for(auto x : a){
        auto it = lower_bound(begin(sortiran), end(sortiran), x);
        cout << it - begin(sortiran) << endl;    
        }
    cout << '\n';
    return 0;
}