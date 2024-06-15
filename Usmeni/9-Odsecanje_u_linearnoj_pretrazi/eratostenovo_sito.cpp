// Program ispituje da li su brojevi iz intervala [1-n] prosti
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 100;
    vector<bool> prost(n + 1, true);
    prost[1] = false;
    for(int d = 2; d * d <= n; d++)
        if(prost[d])
            for(int x = d * d; x <= n; x += d)
                prost[x] = false;
    for(int i = 1; i <= n; i++)
        if(prost[i])
            cout << i << " ";
    cout << endl;

    return 0;
}