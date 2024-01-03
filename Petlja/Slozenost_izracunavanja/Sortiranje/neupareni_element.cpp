#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(begin(v), end(v));

    int broj = 0;

    for(int i = 0; i<n; i+=2){
        if(v[i] - v[i+1] != 0){
            broj = v[i];
            break;
        }
    }

    cout << broj << endl;

    return 0;
}