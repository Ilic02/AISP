#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int k;
    cin >> k;

    int razlika;
    int minRazlika = 1e6;

    sort(begin(v), end(v));

    for(int i = 0; i+k-1<n; i++){
        razlika = abs(v[i] - v[i+k-1]);
        
        if(razlika < minRazlika)
            minRazlika = razlika;
    }

    cout << minRazlika << endl;

    return 0;
}