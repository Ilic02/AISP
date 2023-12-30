#include <iostream>
#include <vector>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int brLetova = 0;

    for(int i = 0; i<n; i++){
        for(int j = 1; j<n; j++)
            if(abs(v[i] - v[1] >= j))
                brLetova++;
    }

    cout << brLetova << endl;

    return 0;
}