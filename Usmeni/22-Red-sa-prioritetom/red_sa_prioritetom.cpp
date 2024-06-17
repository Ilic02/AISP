// Program ispisuje zbir k najboljih
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, k, x;
    cin >> n >> k;

    int zbir = 0;

    priority_queue<int> p;

    while(n--){
        cin >> x;
        p.push(x);
    }

    while(k--){
        zbir += p.top();
        p.pop();
    }

    cout << zbir << endl;

    return 0;
}