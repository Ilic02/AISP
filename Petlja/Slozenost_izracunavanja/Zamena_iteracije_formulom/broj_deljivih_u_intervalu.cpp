#include <iostream>

using namespace std;

int main(){ 
    int a, b, k;
    cin >> a >> b >> k;

    int deljiviDoB = b / k + 1;
    int deljiviDoA = (a-1) / k + 1;

    if(a > 0)
        cout << deljiviDoB - deljiviDoA << endl;
    else
        cout << deljiviDoB << endl;


    return 0;
}