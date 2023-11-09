#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ispitajLokacije(int x, int m, vector<int>& lokacije, int n){
    m--;
    int poslednjaLokacija = lokacije[0];
    for(int i = 1; i < n && m > 0; i++)
        if(lokacije[i] - poslednjaLokacija >= x){
            m--;
            poslednjaLokacija = lokacije[i];
        }

    return m == 0;
}

int main (){
    int m,n;
    cin >> m >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(begin(v), end(v));

    int l = 1, d = v[n-1];
    int resenje = -1;
    while(l <= d){
        int s = (l + d) / 2;
        if(ispitajLokacije(s,m,v,n)){
            resenje = s;
            l = s + 1;
        }
        else{
            d = s-1;
        }
    }

    cout << resenje << endl;

    return 0;
}