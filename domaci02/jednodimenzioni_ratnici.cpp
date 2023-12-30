#include <iostream>
#include <vector>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> x(n);
    for(int i = 0; i<n; i++)
        cin >> x[i];
    
    vector<int> p(n);
    for(int i = 0; i<n; i++)
        cin >> p[i];

    vector<char> s(n);
    for(int i = 0; i<n; i++)
        cin >> s[i];


    return 0;
}