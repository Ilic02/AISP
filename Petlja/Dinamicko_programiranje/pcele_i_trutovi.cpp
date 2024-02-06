#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long fpp = 1;
    long long fp = 1;
    for(int i = 2; i<=n; i++){
        long long f = fp + fpp;
        fpp  = fp;
        fp = f;
    }

    cout << fp << endl;


    return 0;
}