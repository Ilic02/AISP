#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int zbirVektora(vector<int>& v){
    int zbir = 0;
    for(int i = 0; i<v.size(); i++)
        zbir += v[i];

    return zbir;
}

int main(){
    int n;
    cin >> n;

    deque <int> d;

    while(n--){
        int x;
        cin >> x;
        d.push_back(x);
    }

    int zbir1 = d.front();
    int zbir2 = d.back();
    d.pop_back();
    d.pop_front();


    cout << zbir1 << " " << zbir2 << endl;

    return 0;
}