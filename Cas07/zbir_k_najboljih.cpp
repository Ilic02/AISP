#include <iostream>
#include <queue>

using namespace std;

int main (){
    int n, k, x;
    cin >> n >> k;

    priority_queue<int> p;

    int zbir = 0, t;

    while(n--){
        cin >> x;
        p.push(x);
    }

    while(k--){
        t = p.top();
        zbir += t;
        p.pop();
    }

    cout << zbir << endl;

    return 0;
}