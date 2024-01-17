#include <iostream>
#include <vector>

using namespace std;

int main(){
    int64_t n; 
    cin >> n;

    vector<int64_t> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    int64_t zbir = 0;
    int64_t zbirProizvoda = 0;

    for(int i = 0; i<n; i++){
        zbirProizvoda += v[i] * zbir;
        zbir += v[i];
    }

    cout << zbirProizvoda << endl;


    return 0;
}