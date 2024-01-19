#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int k_najblizih(vector<int>& v, int k, int x){
    int n = v.size();
    sort(begin(v), end(v));
    int l = 0, r = n-1;
    while(r - l >= k){
        if(abs(v[l] - x) <= abs(v[r] - x))
            r--;
        else
            l++;
    }
    return l;
}

int main(){
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];
    
    int l = k_najblizih(v,k,x);

    for(int i = l; i< l+k; i++)
        cout << v[i] << " ";
    cout << endl;


    return 0;
}