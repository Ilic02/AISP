#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int brojJedinica = 0;

    for(char c : s){
        if(c == '1')
            brojJedinica++;
    }

    cout << brojJedinica * (brojJedinica - 1) / 2 << endl;

    return 0;
}