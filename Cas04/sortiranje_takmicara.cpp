#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Takmicar{
    string ime;
    int bodovi;
};

bool poredi(Takmicar a, Takmicar b){
    if(a.bodovi > b.bodovi)
        return true;
    if(b.bodovi > a.bodovi)
        return false;
    return a.ime < b.ime;
}

int main(){
    int n;
    cin >> n;

    vector<Takmicar> takmicari(n);
    for(int i = 0; i<n; i++)
        cin >> takmicari[i].ime >> takmicari[i].bodovi;
    
    sort(begin(takmicari), end(takmicari), poredi);

    for(int i = 0; i<n; i++)
        cout << takmicari[i].ime << ' ' << takmicari[i].bodovi << endl;

    return 0;
}