#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Tacka
{
    int x, y;
};
double rastojanje(const Tacka &t1, const Tacka &t2)
{
    double dx = t1.x - t2.x;
    double dy = t1.y - t2.y;
    return sqrt(dx * dx + dy * dy);
}
double najblizeTacke(vector<Tacka> &tacke)
{
    int n = tacke.size();
    double d = numeric_limits<double>::max();
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            d = min(d, rastojanje(tacke[i], tacke[j]));
    return d;
}

int main()
{
    int n;
    cin >> n;
    vector<Tacka> tacke(n);
    for (int i = 0; i < n; i++)
        cin >> tacke[i].x >> tacke[i].y;

    cout << najblizeTacke(tacke) << endl;

    return 0;
}