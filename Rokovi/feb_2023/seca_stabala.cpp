#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct stablo{
    long long xPoc, XKraj, visina;
};

long long kolicina(long long x, const vector<stablo>& stabla){
    long long rezultat = 0;
    for(const stablo& s : stabla){
        long long duzina = max(s.XKraj - max(x, s.xPoc), 0ll);
        rezultat += duzina * s.visina;
    }
    return rezultat;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long M;
    cin >> M;

    int n;
    cin >> n;
    vector<stablo> stabla(n);
    for(int i = 0; i<n; i++)
        cin >> stabla[i].xPoc >> stabla[i].XKraj >> stabla[i].visina;

    long long xMax = 0;
    for(int i = 0; i<n; i++)
        xMax = max(xMax, stabla[i].XKraj);
    
    long long l = 0, d = xMax;
    while(l <= d){
        long long s = l + (d - l) / 2;
        if(kolicina(s, stabla) <= M)
            d = s - 1;
        else
            l = s + 1;
    }

    cout << l << " " << kolicina(l, stabla) << endl;
    
    return 0;
}
