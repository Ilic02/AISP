#include <iostream>
#include <vector>
#define M 1234567

int zbir(int x, int y){
    return ((x % M) + (y % M)) % M;
}

int proizvod(int x, int y){
    return ((x % M) * (y % M)) % M;
}

int razlika(int x, int y){
    return (M + (x % M) - (y % M)) % M;
}

using namespace std;

int main (){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];

    int tezinskiZbir = 0;
    int zbirSvih = 0;
    for(int i = 0; i<n; i++){
        zbirSvih = zbir(zbirSvih, a[i]);
        tezinskiZbir = zbir(tezinskiZbir, proizvod(i, a[i]));
    }

    int maxTezinski = tezinskiZbir;
    for(int i = 1; i<n; i++){
        tezinskiZbir = razlika(zbir(tezinskiZbir, proizvod(n, a[i-1])), zbirSvih);
        if(tezinskiZbir > maxTezinski)
            maxTezinski = tezinskiZbir;
    }

    cout << maxTezinski << endl;

    return 0;
}