#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int x;
    int brojac = 0;
    while(cin >> x){
        if(binary_search(begin(v), end(v), x))
            brojac++;
    }

    cout << brojac << endl;

    return 0;
}