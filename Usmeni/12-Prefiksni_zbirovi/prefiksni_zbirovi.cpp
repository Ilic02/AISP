// Program racuna zbir elemenata na segmentu [a, b]
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];

    vector<int> ps(n + 1);
    ps[0] = 0;
    for(int i = 0; i < n; i++)
        ps[i + 1] = ps[i] + niz[i];

    int a, b;
    cin >> a >> b;

    cout << ps[b + 1] - ps[a] << endl;

    return 0;
}