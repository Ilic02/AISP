#include <iostream>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    uint64_t n;
    cin >> n;

    uint64_t t = 0;

    for(int i = 2; i<n/8; i++){
        if(n % i == 0){
            t++;
            break;
        }
    }

    if(n == 1){
        cout << "NE" << endl;
        return 1;
    }

    if(t != 0)
        cout << "NE" << endl;
    else
        cout << "DA" << endl;

    return 0;
}