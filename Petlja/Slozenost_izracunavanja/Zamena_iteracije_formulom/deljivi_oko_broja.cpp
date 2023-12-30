#include <iostream>
#include <cmath>

using namespace std;

int main(){
    uint64_t n, k;
    cin >> n >> k;

    int l = floor((double)n/(double)k);
    int d = ceil((double)n/(double)k);

    cout << l * k << endl << d * k << endl;


    return 0;
}