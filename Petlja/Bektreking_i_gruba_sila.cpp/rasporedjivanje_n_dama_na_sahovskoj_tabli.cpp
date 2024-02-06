#include <iostream>
#include <vector>

using namespace std;
void ispisi(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

bool dameSeNapadaju(vector<int> &kolone, int v)
{
    for (int vi = 0; vi < v; vi++)
    {
        if (kolone[vi] == kolone[v])
            return true;
        if (abs(v - vi) == abs(kolone[v] - kolone[vi]))
            return true;
    }
    return false;
}

void nDama(vector<int> &kolone, int v)
{
    if (v == kolone.size())
        ispisi(kolone);
    else
    {
        for (int k = 0; k < kolone.size(); k++)
        {
            kolone[v] = k+1;
            if (!dameSeNapadaju(kolone, v))
                nDama(kolone, v + 1);
        }
    }
}

void nDama(int n)
{
    vector<int> kolone(n);
    nDama(kolone, 0);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    nDama(n);
    return 0;
}
