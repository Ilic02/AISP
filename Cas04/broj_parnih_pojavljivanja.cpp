#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++);
    sort(begin(v), end(v));

    int brojParnih = 0;
    int duzina = 1;

    for(int i = 1; i<n; i++){
        if(v[i] == v[i-1])
            duzina++;
        else{
            if(duzina % 2 == 0)
                brojParnih++;
            duzina = 1;
        }
    }
    if(duzina % 2 == 0)
        brojParnih ++;
    
    cout << brojParnih << endl;


    return 0;
}