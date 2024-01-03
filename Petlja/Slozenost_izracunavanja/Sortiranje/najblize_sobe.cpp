#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    sort(begin(v), end(v));

    int broj1 = 0, broj2 = 0;
    int razlika, minRazlika = 1e6;

    for(int i = 0; i<n; i++){
        razlika = abs(v[i] - v[i+1]);
        if(razlika <= minRazlika){
            minRazlika = razlika; 

            if(v[i] > broj1){
                broj1 = v[i];
                broj2 = v[i+1];
            }

        }  
    }

    cout << broj1 << " " << broj2 << endl;


    return 0;
}