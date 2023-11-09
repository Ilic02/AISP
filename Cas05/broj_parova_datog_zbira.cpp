#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int s, n;
    cin >> s >> n;

    vector<int> a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];

    sort(begin(a), end(a));

    int brojParova = 0;
    int i = 0, j = n-1;

    while(i < j){
        if(a[i] + a[j] < s)
            i++;
        else if(a[i] + a[j] > s)
            j--;
        else{
            i++;
            j--;
            brojParova++;
        }
    }

    cout << brojParova << endl;

    return 0;
}