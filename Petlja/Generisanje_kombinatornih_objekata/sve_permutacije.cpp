#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++){
        v[i] = i+1;
    }

    do{
        ispisi(v);
    }while(next_permutation(begin(v), end(v)));
    
    return 0;
}
