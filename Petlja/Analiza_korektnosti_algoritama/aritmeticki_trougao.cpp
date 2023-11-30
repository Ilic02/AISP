#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int64_t ukupanZbir(int64_t x){
    return (x*x) * ((x*x) + 1) / 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    int64_t n;
    cin >> n;

    int64_t x;
    while(n--){
        cin >> x;
        cout << ukupanZbir(x) - ukupanZbir(x-1) << endl;
    }



    return 0;
}