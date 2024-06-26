#include <iostream>
#include <vector>

using namespace std;

bool sledeciNiz(string& s){
    int n = s.length();
    int i = n-1;
    while((i >= 0 && s[i] == '1') || (i > 0 && s[i-1] == '1'))
        s[i--] = '0';
    if(i < 0)
        return false;
    s[i] = '1';
    return true;
}

int main(){
    string s;
    cin >> s;

    if(sledeciNiz(s))
        cout << s;
    else
        cout << "ne postoji\n";

    return 0;
}