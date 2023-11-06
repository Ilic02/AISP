#include <iostream>
#include <vector>

using namespace std;

int main (){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int q;
    cin >> q;

    while(q--){
        int a,b;
        cin >> a >> b;
        
        int zarada = 0;
        for(int i = a; i<= b; i++){
            zarada += v[i];
        }
        cout << zarada << endl;
    }

    

    return 0;
}