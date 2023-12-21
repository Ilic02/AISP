#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector <int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i]; 
    
    sort(begin(v), end(v));

    int brParova = 0,  mentor = 0;
    for(int ucenik = 0; ucenik<n; ucenik++){
        while(mentor < n && v[mentor] < 2 * v[ucenik])
            mentor++;
        if(mentor == n)
            break;
        brParova++;
        mentor++;
    }

    cout << brParova << endl;
    return 0;
}
