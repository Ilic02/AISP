#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maksZbirSegmenta(vector<int> &v, int l, int d)
{
    if (l > d)
        return 0;
    int s = l + (d - l) / 2;
    int maks_zbir_levo = maksZbirSegmenta(v, l, s - 1);
    int maks_zbir_desno = maksZbirSegmenta(v, s + 1, d);
    int zbir_sredina = v[s];
    int maks_zbir_sredina = zbir_sredina;
    for (int i = s - 1; i >= l; i--)
    {
        zbir_sredina += v[i];
        if (zbir_sredina > maks_zbir_sredina)
            maks_zbir_sredina = zbir_sredina;
    }
    zbir_sredina = maks_zbir_sredina;
    for (int i = s + 1; i <= d; i++)
    {
        zbir_sredina += v[i];
        if (zbir_sredina > maks_zbir_sredina)
            maks_zbir_sredina = zbir_sredina;
    }
    return max({maks_zbir_levo, maks_zbir_sredina, maks_zbir_desno});
}

int maksZbirSegmenta(vector<int> &v)
{
    return maksZbirSegmenta(v, 0, v.size() - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << maksZbirSegmenta(v) << endl;
    return 0;
}
