#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int64_t n, x;
    cin >> n;

    int64_t zbir1 = n * (n + 1) / 2;
    int64_t zbir2 = 0;

    while(n--){
        cin >> x;
        zbir2 += x;
    }

    cout << zbir1 - zbir2 << endl;

    return 0;
}