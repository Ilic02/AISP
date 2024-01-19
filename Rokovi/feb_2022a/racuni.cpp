#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    map<string, int> racun;
    map<int, int> brPojavljivanja;

    int x;
    string s;
    brPojavljivanja[0] = k;
    while(n--){
        cin >> s >> x;

        if(s == "upit")
            cout << brPojavljivanja[x] << endl;
        else{
            brPojavljivanja[racun[s]]--;
            racun[s] += x;
            brPojavljivanja[racun[s]]++;
        }
    }




    return 0;
}