#include <iostream>

using namespace std;

bool prost(uint64_t n){
    uint64_t t = 0;
    for(uint64_t i = 2; i<n; i++){
        if(n % i == 0){
            t++;
            break;
        }
    }
    if(n == 1){
        return false;
    }
    if(t != 0)
        return false;
    else
        return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    uint64_t a, b;
    cin >> a >> b;

    uint64_t brojProstih = 0, zbirProstih = 0;

    for(int i = a; i<=b; i++){
        if(prost(i)){
            brojProstih++;
            zbirProstih += i;
        }
    }

    if(zbirProstih >= 1000000)
        zbirProstih = zbirProstih % 1000000;

    cout << brojProstih << " " << zbirProstih << endl;

    return 0;
}