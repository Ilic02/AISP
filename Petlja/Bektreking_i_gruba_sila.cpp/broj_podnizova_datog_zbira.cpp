#include <iostream>
#include <vector>

using namespace std;

const double EPS = 1e-5;

int brojPodnizova(vector<double> &v, int n, double zbir, vector<double> &podniz, int p)
{
    if (n == 0)
    {
        double zbirPodniza = 0.0;
        for (int i = 0; i < p; i++)
            zbirPodniza += podniz[i];

        if (abs(zbirPodniza - zbir) < EPS)
            return 1;
        else
            return 0;
    }
    else
    {
        int broj = 0;
        broj += brojPodnizova(v, n - 1, zbir, podniz, p);
        podniz[p] = v[n - 1];
        broj += brojPodnizova(v, n - 1, zbir, podniz, p + 1);
        return broj;
    }
}

int brojPodnizova(vector<double> &v, double zbir)
{
    int n = v.size();
    vector<double> podniz(n);

    return brojPodnizova(v, n, zbir, podniz, 0);
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    double zbir;
    cin >> zbir;

   cout << brojPodnizova(v, zbir) << endl;
    return 0;
}
