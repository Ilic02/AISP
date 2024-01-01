#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    uint64_t a, b, c;
    cin >> a >> b >> c;

    uint64_t povrsina = a * (b + c);
    uint64_t maxPovrsina = povrsina;

    for(uint64_t i = 1; i<=c; i++){
        povrsina = (a + i) * (b + c - i);
        if(povrsina >= maxPovrsina)
            maxPovrsina = povrsina;
    }

    cout << maxPovrsina << endl;

    return 0;
}