#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int predjeniPut = 0, brojKuglica = 0;
    for(int i = 0; i<k; i++){
        brojKuglica += v[i];
        predjeniPut += (i+1) * v[i];
    }

    int maxPredjeniPut = predjeniPut;

    for(int i = k; i<n; i++){
        predjeniPut -= brojKuglica;
        predjeniPut += k * v[i];
        maxPredjeniPut = max(maxPredjeniPut, predjeniPut);
        brojKuglica -= v[i - k];
        brojKuglica += v[i];
    }

    cout << maxPredjeniPut << endl;


    return 0;
}
