// Program ispistuje poslednjih k linija
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int k;
    cin >> k;
    queue<string> red;

    string linija;
    while(getline(cin, linija)){
        red.push(linija);
        if(red.size() > k)
            red.pop();
    }

    while(!red.empty()){
        cout << red.front() << endl;
        red.pop();
    }

    return 0;
}