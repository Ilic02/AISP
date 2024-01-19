#include <iostream>
#include <vector>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x;
    cout << endl;
}

void generisi(vector<int>& v, int i, int br, int k){
    if(i == v.size()){
        ispisi(v);
        return;
    }

    for(int j = 0; j <= 1; j++){
        v[i] = j;
        if(i == 0 || j != v[i-1])
            generisi(v, i+1, 1, k);
        else if(br + 1 <= k)
            generisi(v, i+1, br+1, k);
    }
}

void generisi(int n, int k){
    vector<int> v(n);
    generisi(v, 0, 0, k);
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;

    generisi(n, k);
    
    return 0;
}
