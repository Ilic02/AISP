#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    uint64_t n;
    cin >> n;

    uint64_t brojNacina = 0;

   for(uint64_t m = 2; m + m*(m - 1)/2 <= n;m++){
    if((n - m * (m - 1) / 2) % m == 0)
        brojNacina++;
   }

    cout << brojNacina << endl;

    return 0;
}
