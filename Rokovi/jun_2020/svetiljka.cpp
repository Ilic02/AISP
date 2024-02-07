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

    int d;
    cin >> d;

    sort(begin(v), end(v));

    int maks = 0, j = 0;
    for(int i = 0; i<n; i++){
        while(v[j] < v[i] - 2*d)
            j++;
        maks = max(maks, i-j+1);
    }

    cout << maks << endl;
    return 0;
}