#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];
    
    int maks = 0;
    for(int i = n-1; i>=0; i--){
        if(v[i] > maks)
            maks = v[i];

        v[i] = maks;
    }

    for(int i = 0; i<n; i++)
        cout << v[i] << endl;

    return 0;
}