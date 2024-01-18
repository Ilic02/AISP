#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    multiset<int> s;
    for(int i = 0; i<n; i++){
        if(!s.empty() && *(s.rbegin()) >= v[i])
            cout << "1 ";
        else
            cout << "0 ";

        s.insert(v[i]);
        if(i >= k)
            s.erase(s.find(v[i - k]));
    }
    cout << endl;


    return 0;
}