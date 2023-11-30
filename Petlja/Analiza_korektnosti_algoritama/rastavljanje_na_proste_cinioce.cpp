#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
  uint64_t n;
  cin >> n;
  uint64_t f = 2; 
  while (n > 1) {
    while (n % f == 0) { 
      cout << f << " ";    
      n /= f;              
    } 
    f = f + 1;             
  }
  cout << endl;
  return 0;
}