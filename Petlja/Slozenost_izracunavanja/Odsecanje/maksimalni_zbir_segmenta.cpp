#include <iostream>
#include <vector>

using namespace std;

int maxZbirSegmenta(const vector<int>& v){
    int n = v.size();
    int maks = 0;
    int i = 0;
    while(i < n){
        int z = 0;
        int j;
        for(j = i; j<n; j++){
            z += v[j];
            if(z < 0)
                break;
            if(z > maks)
                maks = z;
        }
        i = j + 1;
    }
    return maks;
}

int main(){ 
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    int maksZbir = maxZbirSegmenta(v);

    cout << maksZbir << endl;


    return 0;
}