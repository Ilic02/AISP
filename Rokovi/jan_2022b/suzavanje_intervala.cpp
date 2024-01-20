#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, r, d;
    cin >> n >> r >> d;

    while(n--){
        int x;
        cin >> x;
        if(abs(x) > r)
            cout << 0 << endl;
        else{
            int k = (r - abs(x)) / d + 1;
            cout << k << endl;
        }
        
    }



    return 0;
}