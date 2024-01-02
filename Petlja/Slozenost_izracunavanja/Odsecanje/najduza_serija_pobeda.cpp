#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x;
    int duzinaTekuce = 0, duzinaNajduze = 0;
    while(n--){
        cin >> x;
        if(x == 1)
            duzinaTekuce++;
        else{
            if(duzinaTekuce > duzinaNajduze)
                duzinaNajduze = duzinaTekuce;
            duzinaTekuce = 0;
        }
        if(duzinaTekuce > duzinaNajduze)
            duzinaNajduze = duzinaTekuce;
    }
    cout << duzinaNajduze << endl;

    return 0;
}