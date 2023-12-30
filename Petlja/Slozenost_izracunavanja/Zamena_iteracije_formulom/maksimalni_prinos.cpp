#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int maks(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    uint64_t a, b, c;
    cin >> a >> b >> c;

    uint64_t maksPrinos = a* (b + c);

    for(uint64_t i = 1; i<=c; i++){
        uint64_t maksPrinos2 = (a+i)*(b+c-i);
        maksPrinos = maks(maksPrinos, maksPrinos2);
    }

    cout << maksPrinos << endl;

    return 0;
}