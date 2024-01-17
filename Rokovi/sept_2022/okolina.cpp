#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];
    
    sort(begin(v), end(v));

    int l = 0, r = 0, resenje1 = 0;
    int resenje2 = v[0];
    for(int i  = 0; i<n; i++){
        while(v[i] - v[l] > r) 
            l++;
        while(r < n && v[r] - v[i] <= d)
            r++;
        if(r - l > resenje1){
            resenje1 = r - l;
            resenje2 = v[i];
        }
    }

    cout << resenje2 << " " << resenje1 << endl;


    return 0;
}