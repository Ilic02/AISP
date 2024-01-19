#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,t;
    cin >> n >> t;

    vector<int> tabla;
    for(int i = 0; i<n; i++){
        string s;
        int broj;
        cin >> s;

        if(s == "pisi"){
            cin>>broj;
            tabla.push_back(broj);
        }
        else if(s == "brisi"){
            tabla.erase(find(begin(tabla), end(tabla), broj));
        }
        else{
            int brojNacina = 0;
            for(int i = 0; i<tabla.size(); i++){
                for(int j = i+1; j<tabla.size(); j++)
                    if(tabla[i] + tabla[j] == t)
                        brojNacina++;
            }
            cout << brojNacina << endl;
        }
    }


    return 0;
}