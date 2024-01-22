#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    v.push_back(n);
    for(int i = 0; i<k; i++){
        int x = v[i];
        v.push_back(2 * x);
        v.push_back(4 * x - 3);
    }

    sort(begin(v), end(v));

    for(int i = 0; i<k; i++)
        cout << v[i] << " ";
    cout << endl;



    return 0;
}