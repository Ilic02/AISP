#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

long long broj_segmenata(vector<int> &ps, int l, int d, vector<int> &tmp, int K)
{
    if (l >= d)
        return 0;

    int s = l + (d - l) / 2;

    long long broj_levo = broj_segmenata(ps, l, s, tmp, K);
    long long broj_desno = broj_segmenata(ps, s + 1, d, tmp, K);

    long long broj_mesovito = 0;
    int i = l, j = s + 1, k = 0;

    int r = l;
    while (i <= s || j <= d)
    {
        if (j > d || (i <= s && ps[i] <= ps[j]))
            tmp[k++] = ps[i++];
        else
        {
            while (r <= s && ps[j] - ps[r] >= K)
                r++;

            broj_mesovito += r - l;
            tmp[k++] = ps[j++];
        }
    }
    copy(begin(tmp), next(begin(tmp), d - l + 1), next(begin(ps), l));

    return broj_levo + broj_desno + broj_mesovito;
}

long long broj_segmenata(vector<int> &v, int K)
{
    vector<int> ps(v.size() + 1);
    ps[0] = 0;
    partial_sum(begin(v), end(v), next(begin(ps)));

    vector<int> tmp(ps.size());
    return broj_segmenata(ps, 0, ps.size() - 1, tmp, K);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int K;
    cin >> K;

    cout << broj_segmenata(v, K) << endl;

    return 0;
}