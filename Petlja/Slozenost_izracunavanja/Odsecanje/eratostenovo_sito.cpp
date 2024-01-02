#include <iostream>

using namespace std;

bool prost(int n){
    if(n == 1)
        return false;
    if(n == 2)
        return true;
    if(n % 2 == 0)
        return false;
    
    for(int i = 3; i*i <= n; i+=2){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cin >> a >> b;

    int brojac = 0, zbirProstih = 0;

    for(int i = a; i<=b; i++){
        if(prost(i)){
            brojac ++;
            zbirProstih = (zbirProstih + i) % 1000000;
        }
    }

    cout << brojac << " " << zbirProstih << endl;

    return 0;
}
