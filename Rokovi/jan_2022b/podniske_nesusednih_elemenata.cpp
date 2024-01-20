#include <iostream>
#include <string>

using namespace std;

const int MOD = 1e9 + 7;

int nesusedne_podniske(const string& s, int ns, const string& t, int nt){
    if(ns == 0)
        return 1;
    if(nt <= 0)
        return 0;
    int broj = nesusedne_podniske(s, ns, t, nt-1) % MOD;
    if(s[ns-1] == t[nt-1])
        broj = (broj + nesusedne_podniske(s, ns-1, t, nt-2)) % MOD;
    return broj;
}

int main(int argc, char const *argv[])
{
    string s, t;
    cin >> s >> t;

    cout << nesusedne_podniske(s, s.size(), t, t.size()) << endl;
    return 0;
}
