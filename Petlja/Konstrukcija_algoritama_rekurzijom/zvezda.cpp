#include <iostream>
#include <vector>

using namespace std;



int main(){
ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<int>> poznaje(n, vector<int>(n));

    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            cin >> poznaje[i][j];

    int mozdaZvezda = 0;
    for(int i = 1; i<n; i++)
        if(poznaje[mozdaZvezda][i])
            mozdaZvezda = i;

    bool zvezda = true;
    for(int i = 0; i<n; i++){
        if(i != mozdaZvezda && !poznaje[i][mozdaZvezda])
            zvezda = false;
        if(i != mozdaZvezda && poznaje[mozdaZvezda][i])
            zvezda = false;
    }

    if(zvezda)
        cout << mozdaZvezda << endl;
    else
        cout << "-1" << endl;
        


    return 0;
}