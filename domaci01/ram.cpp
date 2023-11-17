#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    int zbirRama = 0;

    for(int i = 0; i<n; i++)
        zbirRama += i;

    for(int i = 0; i < n * (n-1); i+=n)
        zbirRama += i;

    for(int i = n*(n-1); i<n*n; i++)
        zbirRama += i;

    for(int i = n*n-n-1; i>n-1; i-=n)
        zbirRama += i;

    cout << zbirRama << endl;

    return 0;

}