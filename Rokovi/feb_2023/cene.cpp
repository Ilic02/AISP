#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> v(1e6);
    int x;
    for(int i = 0; i<n; i++){
        cin >> x;
        v[x]++;
    }
    
    vector<int> ps(1e6+1, 0);
    for(int i = 0; i<1e6; i++)
        ps[i+1] = ps[i] + v[i];

    int k;
    cin >> k;
    while(k--){
        int a,b;
        cin >> a >> b;
        cout << ps[b+1] - ps[a] << endl;
    }
    return 0;
}
