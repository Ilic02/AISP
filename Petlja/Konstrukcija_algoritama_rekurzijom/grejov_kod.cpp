#include <iostream>
#include <cmath>

using namespace std;

string grejov_kod(unsigned n, unsigned k){
    if(n == 0)
        return "";
    if(k < pow(2, n-1)){
        return "0" + grejov_kod(n-1, k);
    }
    else{
        return "1" + grejov_kod(n - 1, pow(2,n) - 1 - k);
    }
}

int main(){
    unsigned n, k;
    cin >> n >> k;

    cout << grejov_kod(n, k);


    return 0;
}