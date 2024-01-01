#include <iostream>

using namespace std;

int nzd1(int a, int b){
    while(a != b){
        if(a > b)
            a-=b;
        else
            b-=a;
    }
    return a;
}

int nzd(int a, int b, int c){
    return nzd1(nzd1(a,b), c);
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << nzd(a, b, c) << endl;
    return 0;
}
