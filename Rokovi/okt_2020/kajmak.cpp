#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> ps(n+1);
    ps[0] = 0;
    for(int i = 1; i<=n; i++){
        int x;
        cin >> x;

        ps[i] = ps[i-1] + x;
    }

    int t;
    cin >> t;

    int maks = 0, i = 0, j = 0;
    while(j <= n){
        if(ps[j] - ps[i] >= t)
            i++;
        else{
            maks = max(maks, ps[j] - ps[i]);
            j++;
        }
    }

    cout << maks << endl;

    return 0;
}