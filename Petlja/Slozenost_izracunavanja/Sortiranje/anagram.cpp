#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    sort(begin(s1), end(s1));
    sort(begin(s2), end(s2));

    s1.erase(remove_if(s1.begin(), s1.end(), ::isspace), s1.end());
    s2.erase(remove_if(s2.begin(), s2.end(), ::isspace), s2.end());

    if(s1 == s2)
        cout << "da" << endl;
    else
        cout << "ne" << endl;

    return 0;
}