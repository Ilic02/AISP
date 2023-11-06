#include <iostream>
#include <cmath>

using namespace std;

int main (){
    uint64_t n;
    cin >> n;

    uint64_t k;
    uint64_t zbirOd0DoN;
    uint64_t zbirOd0Don;

    while(n--){
        cin >> k;
        zbirOd0DoN = (k*k) * ((k*k) + 1) / 2;
        zbirOd0Don = ((k-1) * (k-1)) * ((k-1) * (k-1) + 1) / 2;

        cout << zbirOd0DoN - zbirOd0Don << endl;
    }cout << endl;

    return 0;
}