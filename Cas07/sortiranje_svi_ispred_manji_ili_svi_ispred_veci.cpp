#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main (){
    int n, x;
    cin >> n;

    deque<int> d;
    while(n--){
        cin >> x;
        if(d.empty() || x < d.front())
            d.push_front(x);
        else
            d.push_back(x);
    }

    for(int i = 0; i<d.size(); i++)
        cout << d[i] << endl;

    return 0;
}