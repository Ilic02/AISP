#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string binZapis(uint64_t n){
    string binarni = "";
    while(n != 0){
        if(n % 2 == 0)
            binarni += "0";
        else
            binarni += "1";
         n /= 2;
    }
    while(binarni.length() <32)
        binarni += "0";

    return binarni;
}

int main(){
    uint64_t n;
    cin >> n;

    string binarniZapis = binZapis(n);

    reverse(begin(binarniZapis), end(binarniZapis));

    cout << binarniZapis << endl;

    return 0;
}