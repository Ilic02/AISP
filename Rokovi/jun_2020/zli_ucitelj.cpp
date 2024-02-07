#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minMaxZbir(vector<int>& v){
    auto as = v;
    sort(begin(as), end(as));

    int n = as.size();

    int m = 0;
    for(int i = 0; i<n/2; i++)
        m = max(m, as[i] + as[n-1-i]);

    return m;
}

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    cout << minMaxZbir(v) - 1 << endl;

    return 0;
}