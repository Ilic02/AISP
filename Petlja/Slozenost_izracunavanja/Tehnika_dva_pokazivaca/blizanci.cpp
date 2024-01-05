#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int m;
    cin >> m;

    vector<int> a(m);
    for(int i = 0; i<m; i++)    
        cin >> a[i];

    int n;
    cin >> n;

    vector<int> b(n);
    for(int i = 0; i<n; i++)    
        cin >> b[i];

    auto a1s = a;
    sort(begin(a1s), end(a1s));

    auto b1s = b;
    sort(begin(b1s), end(b1s));

    int i1 = 0, i2 = 0;

    int minRazlika = 1e6;
    while(i1 < a1s.size() && i2 < b1s.size()){
        if(a1s[i1] <= b1s[i2]){
            minRazlika = min(minRazlika, b1s[i2] - a1s[i1]);
            i1++;
        }
        else{
            minRazlika = min(minRazlika, a1s[i1] - b1s[i2]);
            i2++;
        }
    }

    cout << minRazlika << endl;

    return 0;
}