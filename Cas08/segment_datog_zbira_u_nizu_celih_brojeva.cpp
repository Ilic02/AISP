#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    int z, n;
    cin >> z >> n;

    map<int, int> brPrefiksa;
    brPrefiksa[0] = 1;
    int suma = 0, brSegmenata = 0;
    while(n--){
        int x; 
        cin >> x;
        suma += x;
        brSegmenata += brPrefiksa[suma - z];
        brPrefiksa[suma]++;
    }

    cout << brSegmenata << endl;

    return 0;
}