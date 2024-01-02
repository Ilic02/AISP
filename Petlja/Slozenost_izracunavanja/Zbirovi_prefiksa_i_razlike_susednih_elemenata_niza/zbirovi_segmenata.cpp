#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> prefiksi(n+1);
    int x;
    prefiksi[0] = 0;
    for(int i = 0; i<n; i++){
        cin >> x;
        prefiksi[i+1] = prefiksi[i] + x;
    }
    int m;
    cin >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        cout << prefiksi[b+1] - prefiksi[a] << endl;
    }
    return 0;
}
