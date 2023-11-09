#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];

    sort(begin(a), end(a));

    int64_t t;
    cin >> t;

    int j = 0;
    int64_t maxK = 0, razlika = 0;
    for(int64_t i = 0; i<n; i++){
        while((i - j + 1) * (a[i] - a[j]) > t)
        j++;
        int64_t trenutnaRazlika = (i - j + 1) * (a[i] - a[j]);
        if(i - j + 1 > maxK || (i - j + 1 == maxK && trenutnaRazlika < razlika)){
            maxK = i - j + 1l;
            razlika = trenutnaRazlika;
        }
    }

    cout << maxK << ' ' << razlika << endl;
    return 0;
}