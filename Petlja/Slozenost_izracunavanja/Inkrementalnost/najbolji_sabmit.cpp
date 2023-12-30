#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int maxBod = v[0];

    for(int i = 0; i<n; i++){
        if(maxBod <= v[i]){
            maxBod = v[i];
        }
        cout << maxBod << endl;
    }


    return 0;
}