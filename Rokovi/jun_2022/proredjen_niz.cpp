#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permutuj(vector<int>& v, int i, int d){
    if(i == v.size()){
        for(int x : v)
            cout << x << ' ';
        cout << endl;
        return;
    }
    for(int j = i; j<v.size(); j++){
        if(i == 0 || abs(v[i-1] - v[j]) >= d){
            swap(v[i], v[j]);
            permutuj(v, i+1, d);
            swap(v[i], v[j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    permutuj(v,0,d);

    return 0;
}
