#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int l = 0, brojNula = 0, maksFlip = 0;

    for(int d = 0; d < n; d++){
        if(v[d] == 0)
            brojNula++;
        
        while(brojNula > k){
            if(v[l] == 0)
                brojNula--;
            l++;
        }
        maksFlip = max(maksFlip, d - l + 1);
    }

    cout << maksFlip << endl;

    return 0;
}