#include <iostream>

using namespace std;

int min(uint64_t a, uint64_t b, uint64_t c){
    if(a < b && a < c)
        return a;
    else if(b < a && b < c)
        return b;
    else 
        return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    uint64_t a, b, c;
    cin >> a >> b >> c;

    uint64_t minBroj = min(a, b, c);

    int najveciDelilac;

    for(int i = 1; i<=minBroj; i++){
        if(a % i == 0 && b % i == 0 && c % i == 0)
            najveciDelilac = i;
            
    }

    cout << najveciDelilac << endl;

    return 0;
}