#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int brojNacina = 0;
    for(int i = 2; i + i*(i-1)/2 <= n; i++)
        if((n - i*(i-1)/2) % i == 0)
            brojNacina++;

    cout << brojNacina << endl;

    return 0;
}