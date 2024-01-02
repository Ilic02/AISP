#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int zbirPrefiksa = 0;
    int minZbirPrefiksa = zbirPrefiksa;
    int maks = 0;

    while(n--){
        int x;
        cin >> x;
        zbirPrefiksa += x;
        int zbirSegmenata = zbirPrefiksa - minZbirPrefiksa;
        if(zbirSegmenata > maks)
            maks = zbirSegmenata;
        if(zbirPrefiksa < minZbirPrefiksa)
            minZbirPrefiksa = zbirPrefiksa;
    }

    cout << maks << endl;


    return 0;
}