#include <iostream>

using namespace std;
int faktorijel(int n){
    if(n == 1)
        return 1;
    return n * faktorijel(n-1);
}

int main (){
    ios_base::sync_with_stdio(false);   
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++)
        cout << faktorijel(i) << endl;

}