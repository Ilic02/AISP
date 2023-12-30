#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    uint64_t n,i;
    cin >> n >> i;

    uint64_t zbir1 = (n*(i+1))*(n*(i+1)-1)/2;
    uint64_t zbir2 = (n*i)*(n*i-1)/2;
    uint64_t vrstaZbir = zbir1 - zbir2;

    uint64_t kolonaZbir = 0;
    for(int j=i; j<=n*(n-1)+i; j+=n){
        kolonaZbir += j;
    }

    cout << vrstaZbir << endl << kolonaZbir << endl;

    return 0;
}