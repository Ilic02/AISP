#include <iostream>
#include <queue>

using namespace std;

int suma(pair<int, int> p){
    return p.first * p.first + p.second * p.second;
}

struct comparator{
    bool operator()(pair<int, int> x, pair<int, int> y){
        if(suma(y) < suma(x))
            return true;
        if(suma(y) > suma(x))
            return false;
        return y.first < x.first;
    }
};

int main (){
    int n, k;
    cin >> n >> k;

    priority_queue<pair<int, int>, vector<pair<int, int>>, comparator > parovi;

    for(int i = 0; i<=n; i++)
        parovi.push({i, i});

    while(k--){
        pair<int, int> t = parovi.top();
        parovi.pop();
        if(t.second < n)
            parovi.push({t.first, t.second + 1});
    }

    pair<int, int> t = parovi.top();
    cout << t.first << ' ' << t.second << ' ' << suma(t) << "\n";

    return 0;
}