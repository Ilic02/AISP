#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    int a,d;
    while(cin >> a >> d){
        int N = n;
        int zbir = a;
        int noviZbir;
        while(N--){
            noviZbir = zbir;
            zbir+=d;
        }

        cout << noviZbir << endl;
    }


    return 0;
}