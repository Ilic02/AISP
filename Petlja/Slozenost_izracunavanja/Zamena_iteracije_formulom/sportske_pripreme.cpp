#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    uint64_t n;
    cin >> n;

    uint64_t a,d;
    uint64_t zbir = 0;
    float ukupanZbir = 0;
    while(cin >> a >> d){

        double ukupanZbir = n * (2*a +(n-1)*d)/2.0;

        cout <<fixed << setprecision(2) << ukupanZbir/1000.0 << endl;
    }   


    return 0;
}