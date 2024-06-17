// Implementacija reda sa prioritetom preko hipa
#include <iostream>
#include <vector>

using namespace std;

int levoDete(int i){
    return 2 * i + 1;
}

int desnoDete(int i){
    return 2 * i + 2;
}

int roditelj(int i){
    return (i - 1) / 2;
}

int najveci(const vector<int> &hip){
    return hip[0];
}

void pomeriNavise(vector<int> &hip, int k){
    int r = roditelj(k);

    if(k > 0 && hip[k] > hip[r]){
        swap(hip[k], hip[r]);
        k = r;
        r = roditelj(k);
    }
}

void ubaci(vector<int> &hip, int x){
    hip.push_back(x);
    pomeriNavise(hip, hip.size() - 1);
}

void pomeriNanize(vector<int> &hip, int k){
    int najveci = k;
    int levo = levoDete(k), desno = desnoDete(k);
    if(levo < hip.size() && hip[levo] > hip[najveci])
        najveci = levo;
    if(desno < hip.size() && hip[desno] > hip[najveci])
        najveci = desno;

    if(najveci != k){
        swap(hip[najveci], hip[k]);
        pomeriNanize(hip, najveci);
    }
}

void izbaciNajveci(vector<int> &hip){
    hip[0] = hip.back();
    hip.pop_back();
    pomeriNanize(hip, 0);
}