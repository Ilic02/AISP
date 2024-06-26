#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

uint64_t faktorijel(uint64_t n){
    if(n == 1)
        return 1;
    return n * (faktorijel(n-1));
}

int main(int argc, char const *argv[])
{
    uint64_t n;
    cin >> n;

    double verovatnoca = 1;
    for(int i = 1; i<=n; i++){
        verovatnoca += (pow(-1, i) / faktorijel(i));
    }

    cout << fixed << setprecision(14) << verovatnoca << endl;

    return 0;
}
