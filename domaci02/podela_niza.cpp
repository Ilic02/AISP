#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    int N = n;

    deque <int> d;

    while(n--){
        cin >> x;
        d.push_back(x);
    }

    int zbir1 = d.back(), zbir2 = d.front();

    while(!d.empty()){
        d.pop_back();
        d.pop_front();
        if(zbir1 > zbir2){
            zbir2 += d.front();
        }
        else if(zbir2 > zbir1)
            zbir1 += d.back();
    }

    cout << zbir1 << endl << zbir2 << endl;
    
    return 0;
}