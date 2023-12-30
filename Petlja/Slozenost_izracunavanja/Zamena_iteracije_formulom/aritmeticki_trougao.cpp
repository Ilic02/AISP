#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    uint64_t n;
    cin >> n;

    uint64_t k;
    while(n--){
        cin >> k;
        uint64_t k2 = k*k;
        uint64_t k3 = (k-1)*(k-1);
        uint64_t zbir1 = k2*(k2+1)/2;
        uint64_t zbir2 = k3*(k3+1)/2;
        cout << zbir1 - zbir2 << endl;
    }

    return 0;
}