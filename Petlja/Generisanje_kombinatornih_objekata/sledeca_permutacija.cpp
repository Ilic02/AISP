#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    if(next_permutation(begin(v), end(v)))
        ispisi(v);
    else
        cout << "ne postoji" << endl;

    return 0;
}