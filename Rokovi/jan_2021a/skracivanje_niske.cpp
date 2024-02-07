#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    string t;
    for(char c : s){
        if(t.empty() || t.back() != c)
            t.push_back(c);
        else
            t.pop_back();
    }

    cout << t << endl;

    return 0;
}