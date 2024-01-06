#include <iostream>
#include <set>

using namespace std;

//Mrzelo me da implementriam preko steka

int main(int argc, char const *argv[])
{
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

    for(int t : s)
        cout << t << endl;
    return 0;
}
