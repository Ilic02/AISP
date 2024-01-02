#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x, zbir = 0, maxZbir = 0;
    while(n--){
        cin >> x;
        zbir += x;
        if(zbir > maxZbir)
            maxZbir = zbir;
    }
    
    cout << maxZbir << endl;

    return 0;
}