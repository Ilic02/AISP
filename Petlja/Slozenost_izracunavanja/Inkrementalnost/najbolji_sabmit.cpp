#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int maxBodova = 0;
    int bodovi;
    while(n--){
        cin >> bodovi;
        if(bodovi > maxBodova)
            maxBodova = bodovi;
        cout << maxBodova << endl;   
    }


    return 0;
}
