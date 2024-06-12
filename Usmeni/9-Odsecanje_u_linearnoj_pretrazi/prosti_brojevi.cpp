// Program proverava da li je broj prost
#include <iostream>

using namespace std;

bool prost(int n){
    if(n == 1)
        return false;
    if(n == 2)
        return true;
    if(n % 2 == 0)
        return false;

    for(int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return false;

    return true;
}

int main(){
    int n;
    cin >> n;

    if(prost(n))
        cout << "Prost\n";
    else
        cout << "Nije prost\n";

    return 0;
}