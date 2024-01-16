#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(begin(a), end(a));

    vector<int> b(n);
    for(int i = 0; i<n; i++){
        cin >> b[i];
    }
    sort(begin(b), end(b));
    int d2 = d;

    int brojac = 0;
    while(d2!=0){
        for(int i = 0; i<n; i++)
            if(binary_search(begin(b), end(b), abs(a[i]-d + d2)))
                brojac++;
        d2--;
    }

    cout << brojac << endl;

    return 0;
}
