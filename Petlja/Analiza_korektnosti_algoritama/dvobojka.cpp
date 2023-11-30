#include <iostream> 
#include <deque>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    deque<int> d;

    int x;
    while(n--){
        cin >> x;
        if(x % 2 == 0)
            d.push_front(x);
        else
            d.push_back(x);
    }

    for(int i = 0; i<d.size(); i++)
        cout << d[i] << " ";
    cout << endl;

    return 0;
} 