#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    map<string, string> posmatra;
    set<string> posmatran;

    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string s1,s2;
        cin >> s1 >> s2;
        posmatra[s1] = s2;
        posmatran.insert(s2);
    }
    int otkriveno = 0;
    for(auto p : posmatra){
        if(posmatra.find(p.second) == posmatra.end() && 
           posmatran.find(p.first) != posmatran.end())
           otkriveno++;
    }

    cout << otkriveno << endl;


    return 0;
}