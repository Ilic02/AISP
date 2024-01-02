#include <iostream>
#include <vector>

using namespace std;

int main(){
    int64_t n;
    cin >> n;

    vector<int64_t> v(n);
    for(int64_t i = 0; i<n; i++)
        cin >> v[i];

    int64_t duinzaKablova = 0;
    for(int64_t i = 0; i<n; i++){
        duinzaKablova += v[i] * i;
    }

    int64_t t1 = 0, t2 = 0;
    for(int64_t i = 0; i<n; i++){
        t2 += v[i];
    }

    int64_t minDuzinaKablova = duinzaKablova;

    for(int64_t i = 1; i<n; i++){
        t1 += v[i-1];
        t2 -= v[i-1];

        duinzaKablova += t1 - t2;
        if(duinzaKablova < minDuzinaKablova)
            minDuzinaKablova = duinzaKablova;
    }

    cout << minDuzinaKablova << endl;

    return 0;
}