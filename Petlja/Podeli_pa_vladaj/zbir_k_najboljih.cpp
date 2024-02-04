#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(rbegin(v), rend(v));

    int zbir = 0;

    for(int i = 0; i<k; i++)
        zbir += v[i];


    cout << zbir << endl;

    return 0;
}
