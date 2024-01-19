#include <iostream>
#include <vector>

using namespace std;

void ispisi(const vector<int>& v){
    for(int x : v)
        cout << x;
    cout << endl;
}

void generisi(vector<int>& v, int i, int razlika, int k){
    int n = v.size();

    if(razlika + n - i < -k || razlika - (n - i) > k)
        return;
    
    if(i == n){
        ispisi(v);
        return;
    }
    v[i] = 0;
    generisi(v, i+1, razlika - 1, k);

    v[i] = 1;
    generisi(v, i+1, razlika + 1, k);
}

void generisi(int n, int k){
    vector<int> v(n);
    generisi(v, 0, 0, k);
}

int main(){
    int n,k;
    cin >> n >> k;

    generisi(n, k);

    return 0;
}