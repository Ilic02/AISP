#include <iostream>
#include <vector>

using namespace std;

void ispisi(string& s){
    cout << s << endl;
}

void obradi_sve_binarne_bez_11(string& s, int i){
    if(i == s.size())
        ispisi(s);
    else{
        s[i] = '0';
        obradi_sve_binarne_bez_11(s, i+1);

        if(i == 0 || s[i-1] != '1'){
            s[i] = '1';
            obradi_sve_binarne_bez_11(s, i+1);
        }
    }
}

void obradi_sve_binarne_bez_11(int n){
    string s(n, '0');
    obradi_sve_binarne_bez_11(s, 0);
}

int main(){
    int n;
    cin >> n;

    obradi_sve_binarne_bez_11(n);

    return 0;
}