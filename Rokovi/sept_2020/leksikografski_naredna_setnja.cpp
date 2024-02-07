#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

bool naredna_setnja(vector<int>& v){
    int n = v.size();
    int j = n-1;
    while(j > 0 && v[j] + 1 - v[j-1] > 1)
        j--;
    if(j == 0)
        return false;
    v[j]++;
    for(int k = j+1; k<n; k++)
        v[k] = v[k-1] - 1;
    return true;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];
    
    if(naredna_setnja(v))
        ispisi(v);
    else
        cout << "-1\n";

    return 0;
}