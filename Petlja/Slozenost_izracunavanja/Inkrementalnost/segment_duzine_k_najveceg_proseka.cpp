#include <iostream>
#include <vector>

using namespace std;

int main(){
    int k, n;
    cin >> k >> n;

    vector<double> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    double suma = 0;
    for(int i = 0; i<n; i++)
        suma += v[i];

    int maxPocetak = 0;
    double maxSuma = suma;

    for(int i = 1; i <= n-k; i++){
        suma = suma - v[i-1] + v[i + k -1];

        if(suma >= maxSuma){
            maxSuma = suma;
            maxPocetak = i;
        }
    }

    cout << maxPocetak <<endl;

    return 0;
}