#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double podele(int i, vector<double>& v, double zbir1, double zbir2){
    if(i == v.size())
        return abs(zbir1 - zbir2);
    
    double resL = podele(i + 1, v, zbir1 + v[i], zbir2);
    double resD = podele(i + 1, v, zbir1, zbir2 + v[i]);


    return min(resL, resD);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<double> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    cout << fixed << setprecision(2) << podele(0, v, 0 ,0) << endl;
    return 0;
}
