#include <iostream>
#include <string>

using namespace std;

int main (){
    string s;
    cin >> s;

    int n = s.length();

    int brojac = 0;

    for(int i = 0; i<n; i++){
        if(s[i] == '1')
            brojac++;
    }

    int brojPodstringova = brojac * (brojac-1) / 2;

    cout << brojPodstringova << endl;



    return 0;
}