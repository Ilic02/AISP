#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int k,n;
    cin >> k >> n;

    double x;
    double suma = 0.0;
    queue<double> q;
    for(int i = 0; i<k; i++){
        cin >> x;
        q.push(x);
        suma += x;
    }

    int maxPocetak = 0;
    double maxSuma = suma;

    for(int i = 1; i <= n-k; i++){
        cin >> x;

        suma = suma - q.front() + x;
        q.pop();
        q.push(x);

        if(suma >= maxSuma){
            maxSuma = suma;
            maxPocetak = i;
        }
    }

    cout << maxPocetak << endl;

    return 0;
}