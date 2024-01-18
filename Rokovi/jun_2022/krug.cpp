#include <iostream>
#include <vector>

using namespace std;

int main(){
    uint64_t n;
    cin >> n;

    uint64_t zbirKruga = 0;
    vector<uint64_t> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
        zbirKruga += v[i];
    }

    int j = 0;
    uint64_t zbirSegmenata = v[0], minRazlika = zbirKruga;
    for(int i = 0; i<n; i++){
        while(2 * zbirSegmenata < zbirKruga){
            j++;
            if(j >= n)
                j -= n;
            zbirSegmenata += v[j];
        }
        minRazlika = min(minRazlika, 2*zbirSegmenata - zbirKruga);
        zbirSegmenata -= v[i];
    }

    cout << minRazlika << endl;

    return 0;
}