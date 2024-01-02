#include <iostream>
#include <vector>

using namespace std;

int main(){
    int k, n;
    cin >> k >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    vector<int> br(k, 0);
    br[0] = 1;

    int s = 0;
    for(int i = 0; i<n; i++){
        s = (s + v[i]) % k;
        br[s]++;
    }
    int broj = 0;
    for(int i = 0; i<k; i++){
        broj += br[i] * (br[i] - 1) / 2;
    }

    cout << broj << endl;

    return 0;
}