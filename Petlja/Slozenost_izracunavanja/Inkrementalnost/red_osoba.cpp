#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int brOsoba = 1;
    int maxVisina = v[0];

    for(int i =1 ; i<n; i++){
        if (v[i] > maxVisina){
            brOsoba++;
            maxVisina = v[i];
        }
    }

    cout << brOsoba << endl;

    return 0;
}