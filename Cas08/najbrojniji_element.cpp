#include <iostream>
#include <map>

using namespace std;

int main (){
    int n;
    cin >> n;

    map<string, int> brGlasova;
    while(n--){
        string ime;
        cin >> ime;
        brGlasova[ime]++;
    }

    int maxGlasova = 0;
    for(auto p : brGlasova){
        if(p.second > maxGlasova)
            maxGlasova = p.second;
    }

    cout << maxGlasova << endl;

    return 0;
}