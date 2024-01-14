#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int brojac = 0;

    for(int i = 0; i<n; i++)
        for(int j = i+1; j<n; j++)
            if(v[j] < v[i])
                brojac++;


    cout << brojac << endl;


    return 0;
}