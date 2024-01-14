#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    priority_queue<int> p;

    while(n--){
        int x;
        cin >> x;
        p.push(x);
    }

    int zbir = 0;
    while(k--){
        zbir += p.top();
        p.pop();
    }

    cout << zbir << endl;

    return 0;
}