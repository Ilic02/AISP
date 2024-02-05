#include <iostream>
#include <vector>

using namespace std;
void ispisi(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

void sveKombinacije(vector<int> &v, int i, int n)
{
    int k = v.size();

    if (i == k)
    {
        ispisi(v);
        return;
    }

    int pocetak = i == 0 ? 1 : v[i - 1] + 1;
    int kraj = n + i - k + 1;
    for (int x = pocetak; x <= kraj; x++)
    {
        v[i] = x;
        sveKombinacije(v, i + 1, n);
    }
}

void sveKombinacije(int k, int n)
{
    vector<int> v(k);
    sveKombinacije(v, 0, n);
}

int main()
{
    int k, n;
    cin >> k >> n;

    sveKombinacije(k, n);

    return 0;
}