#include <iostream>
#include <vector>

using namespace std;

long long broj_inverzija(vector<int> &a, int l, int d, vector<int> &b)
{
    if (l >= d)
        return 0;
    int s = l + (d - l) / 2;
    long long broj = 0;
    broj += broj_inverzija(a, l, s, b);
    broj += broj_inverzija(a, s + 1, d, b);
    int pl = l, pd = s+1, pb = 0;
    while(pl <= s && pd <= d){
        if(a[pl] <= a[pd])
            b[pb++] = a[pl++];
        else{
            broj += s - pl + 1;
            b[pb++] = a[pd++];
        }
    }
    while(pl <= s)
        b[pb++] = a[pl++];
    while(pd <= d)
        b[pb++] = a[pd++];

    copy(begin(b), next(begin(b), d - l + 1), next(begin(a), l));

    return broj;
}

long long broj_inverzija(vector<int>& v){
    vector<int> tmp1(v.size()), tmp2(v.size());
    copy(begin(v), end(v), begin(tmp1));
    return broj_inverzija(tmp1, 0, v.size() - 1, tmp2);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << broj_inverzija(v) << endl;

    return 0;
}