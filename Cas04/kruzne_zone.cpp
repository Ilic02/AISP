#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main (){
    int n;
    cin >> n;

    vector<double> zone(n);
    for(int i = 0; i<n; i++)
        cin >> zone[i];

    vector<double> poluprecnik(n);
    poluprecnik[0] = zone[0];
    for(int i = 1; i<n; i++)
        poluprecnik[i] = poluprecnik[i-1] + zone[i];

    int m;
    cin >> m;

    while(m--){
        double x,y;
        cin >> x >> y;
        double d = sqrt(x * x + y * y);
        auto it = lower_bound(begin(poluprecnik), end(poluprecnik), d);
        if(it == end(poluprecnik))
            cout << "izvan\n";
        else
            cout << it - begin(poluprecnik) << "\n";
    }


    return 0;
}