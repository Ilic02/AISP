#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    int zbir = 0, maxZbir = 0;

    int x; 
    while(n--){
        cin >> x;
        zbir += x;
        if(zbir >= maxZbir)
            maxZbir = zbir;
    }

    cout << maxZbir << endl;


    return 0;
}