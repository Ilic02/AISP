#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main (){
    int s, n, x;
    cin >> s >> n;

    set<int> brojevi;
    int brojParova = 0;
    while(n--){
        cin >> x;
        if(brojevi.find(s - x) != end(brojevi))
            brojParova++;
        brojevi.insert(x);
    }

    cout << brojParova << endl;

    return 0;
}