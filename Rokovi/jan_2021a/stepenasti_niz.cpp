#include <iostream>
#include <vector>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

void stepenasti(vector<int>& v, int i){
    if(i == v.size()){
        ispisi(v);
        return;
    }

    v[i] = v[i-1];
    stepenasti(v, i+1);

    v[i] = v[i - 1] + 1;
    stepenasti(v, i+1); 
}

void stepenasti(int n){
    vector<int> v(n);
    v[0] = 1;
    stepenasti(v, 1);
}

int main(){
    int n;
    cin >> n;

    stepenasti(n);

    return 0;
}