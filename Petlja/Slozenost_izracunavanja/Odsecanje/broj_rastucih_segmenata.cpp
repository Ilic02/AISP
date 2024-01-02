#include <iostream>

using namespace std;

int main(){
    int64_t n;
    cin >> n;
    int64_t prethodni;
    cin >> prethodni;

    int64_t brojRastucih = 0;
    int64_t duzinaTekuceRastuce = 1;

    for(int64_t i = 1; i<n; i++){
        int64_t tekuci;
        cin >> tekuci;

        if(tekuci > prethodni)
            duzinaTekuceRastuce++;
        else{
            brojRastucih += (duzinaTekuceRastuce - 1) * duzinaTekuceRastuce / 2;
            duzinaTekuceRastuce = 1;
        }
        prethodni = tekuci;
    }

    brojRastucih += (duzinaTekuceRastuce - 1) * duzinaTekuceRastuce / 2;
    cout << brojRastucih << endl;


    return 0;
}