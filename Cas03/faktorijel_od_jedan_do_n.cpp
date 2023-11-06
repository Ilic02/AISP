#include <iostream>

using namespace std;

int main (){
    uint64_t n;
    cin >> n;
    uint64_t faktorijel = 1;
    for(int i = 1; i<=n; i++){
        faktorijel = faktorijel * i;
        cout << faktorijel << endl;
}

    return 0;
}