// Program objedinjava elemenata dva sortirana niza u jedan
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m;
    cin >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++)
        cin >> a[i];

    int n;
    cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin >> b[i];

    int i = 0, j = 0, k = 0;
    vector<int> c(n + m);
    while(i < m && j < n)
        c[k++] = a[i] <= b[j] ? a[i++] : b[j++];
    while(i < m)
        c[k++] = a[i++];
    while(j < n)
        c[k++] = b[j++];

    for(int x : c)
        cout << x << " ";
    cout << endl;

    return 0;
}