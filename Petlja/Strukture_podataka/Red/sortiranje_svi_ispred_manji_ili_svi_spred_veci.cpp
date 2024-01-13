#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    deque<int> d;

    int x;
    cin >> x;
    d.push_back(x);

    for(int i = 1; i<n; i++){
        cin >> x;
        if(x < d.back())
            d.push_front(x);
        else
            d.push_back(x);

    }

    for(int i = 0; i<n; i++)
        cout << d[i] << " ";
    cout << endl;


    return 0;
}