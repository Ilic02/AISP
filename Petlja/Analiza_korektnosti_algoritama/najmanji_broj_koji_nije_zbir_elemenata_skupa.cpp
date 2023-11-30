#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int mozeDo = 0; 
  for (int i = 0; i < n; i++) {
    int x; 
    cin >> x;
    if (x > mozeDo + 1)
      break;
    mozeDo += x;
  }
  cout << mozeDo + 1 << endl;
  return 0;
}