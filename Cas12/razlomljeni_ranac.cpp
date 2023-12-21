#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int t, n;
    cin >> n;

    vector <pair<int, int> > v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i].first >> v[i].second;
        v[i].first /= v[i].second;
    }

    cin >> t;

    sort(v.rbegin(), v.rend());

    int t_skupljeno = 0;
    int vr_skupljeno = 0;
    for(int i = 0; i < n && t_skupljeno < t; i++){
        int kolicina = min(v[i].second, t - t_skupljeno);
        t_skupljeno += kolicina;
        vr_skupljeno += kolicina * v[i].first;
    }

    cout << vr_skupljeno << endl;

    return 0;
}