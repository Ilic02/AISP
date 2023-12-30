#include <iostream>

using namespace std;

int main (){
    int a,b,k;
    cin >> a >> b >> k;

    int od0DoB = b / k + 1;
    int od0DoA = (a-1) / k + 1;

    if(a == 0)
        cout << od0DoB << endl;
    else
        cout << od0DoB - od0DoA << endl;

    return 0;
}