// Program ispisuje ucitane linije u obratnom redosledu
#include <iostream>
#include <stack>

using namespace std;

int main(){
    string linija;
    stack<string> s;
    while(getline(cin, linija))
        s.push(linija);
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}