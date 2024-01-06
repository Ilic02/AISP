#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    int x;
    multiset<int> s;
    while(n--){
        cin >> x;
        s.insert(x);
    }

    for(int i : s)
        cout << i << endl;



    return 0;
}
