#include <iostream>
#include <vector>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x;
    cout << endl;
}

void generisi(vector<int>& v, int i){
    if(i == v.size()){
        ispisi(v);
        return;
    }
    for(int j = (i == 0 ? 1 : 0); j<4; j++){
        v[i] = j;
        if(i > 0 && v[i] % 2 == 1 && v[i-1] % 2 == 1)
            continue;
        generisi(v, i+1);
    }
}

void generisi(int n){
    vector<int> v(n);
    generisi(v, 0);
}

int main(){
    int n;
    cin >> n;

    generisi(n);

    return 0;
}