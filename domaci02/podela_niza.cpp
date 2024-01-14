#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sol = 0;
    vector<int> a(n);
    vector<int> pfs(n);
    vector<int> pfsx(n);
    // map<pfs[i], i> m;
    map<int, int> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    pfs[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pfs[i] = pfs[i - 1] + a[i];
        m[pfs[i]] = i;
    }
    
    pfsx[n - 1] = a[n - 1];
    for (int j = n - 2; j >= 0; j--)
    {
        pfsx[j] = pfsx[j + 1] + a[j];
        if (m.find(pfsx[j]) != m.end() && j > m[pfsx[j]])
        {
            sol = max(sol, pfsx[j]);
        }
    }
    cout << sol << endl;
    return 0;
}