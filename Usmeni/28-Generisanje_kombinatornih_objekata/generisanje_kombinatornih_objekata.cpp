// Program ispisuje sve podskupove
#include <iostream>
#include <vector>

using namespace std;

void obradi(const vector<int> &skup){
    for(int x : skup)
        cout << x << " ";
    cout << endl;
}

void svi_podskupovi(vector<int> &skup, int n){
    obradi(skup);
    int pocetak = skup.empty() ? 0 : skup.back() + 1;
    for(int i = pocetak; i < n; i++){
        skup.push_back(i);
        svi_podskupovi(skup, n);
        skup.pop_back();
    }
}

void svi_podskupovi(int n){
    vector<int> skup;
    skup.reserve(n);
    svi_podskupovi(skup, n);
}

int main(){
    int n;
    cin >> n;

    svi_podskupovi(n);

    return 0;
}