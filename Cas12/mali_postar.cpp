#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(begin(v), end(v));

    int zbir = 0;
    for(int i = 0; i < n / 2; i++){
        zbir -= v[i];
        zbir += v[n - 1 - i];
    }

    cout << 2 * zbir << endl;
    return 0;
}
