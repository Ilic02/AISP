#include <iostream>
#include <stack>

using namespace std;

int main(){
    string t;
    stack<string> s;

    string pocetna;

    while(cin >> t){
        if(t == "back"){
            if(!s.empty())
                s.pop();
        
        if(!s.empty())
            cout << s.top() << endl;
        else
            cout << "-" << endl;
        }
        else{
        cout << t << endl;
        s.push(t);
    }
    }   

    return 0;
}