#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> manjiOd;
    vector<int> izmedju;
    vector<int> veciOd;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int a,b;
    cin >> a >> b;

    for(int i = 0; i<n; i++){
        if(v[i] < a)
            manjiOd.push_back(v[i]);
        if(v[i] >= a && v[i] <= b)
            izmedju.push_back(v[i]);
        if(v[i] > b)
            veciOd.push_back(v[i]);
    }

    for(int i = 0; i<manjiOd.size(); i++)
        cout << manjiOd[i] << " ";
    cout << endl;

    for(int i = 0; i<izmedju.size(); i++)
        cout << izmedju[i] << " ";
    cout << endl;

    for(int i = 0; i<veciOd.size(); i++)
        cout << veciOd[i] << " ";
    cout << endl;


    return 0;
}