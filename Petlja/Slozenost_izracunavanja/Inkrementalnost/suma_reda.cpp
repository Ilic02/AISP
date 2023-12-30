#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int64_t faktorijel(int n){
    if(n == 1)
        return 1;
    return n * faktorijel(n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    double verovatnoca = 1;

    for(int i = 1; i<=n; i++){
        verovatnoca += (pow(-1, i) / faktorijel(i));
    }

    cout << fixed << setprecision(14) << verovatnoca << endl;

    return 0;
}