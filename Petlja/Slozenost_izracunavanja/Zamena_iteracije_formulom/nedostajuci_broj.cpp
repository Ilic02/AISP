#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    uint64_t n;
    cin >> n;

    uint64_t zbir1 = 0;

    uint64_t N = n;

    while (N--)
    {
        uint64_t x; 
        cin >> x;
        zbir1 += x;
    }

    uint64_t zbir2 = n*(n+1)/2;

    cout << zbir2 - zbir1<< endl;
    
    return 0;
}
