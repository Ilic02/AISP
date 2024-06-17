// Program ilustruje upotrebu mape
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> map;
    char c;
    while(cin >> c){
        if(c == 'w'){
            string k; int v;
            cin >> k >> v;
            map[k] = v;
        }
        else if(c == 'r'){
            string k;
            cin >> k;
            auto it = map.find(k);
            if(it != map.end())
                cout << it->second << endl;
            else 
                cout << "-" << endl;
        }
        
    }

    return 0;
}