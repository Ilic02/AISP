#include <iostream>
#include <vector>

using namespace std;

bool prost(int n) {
  if (n < 2)
    return false;
  for (int d = 2; d * d <= n; d++)
    if (n % d == 0)
      return false;
  return true;
}

int main() {
    ios_base::sync_with_stdio(false);
  int n;
  cin >> n;

  int brojParova = 0;
  for (int p = 2; p <= n; p++)
    if (prost(p))
      for (int q = p+1; p+q <= n; q++)
        if (prost(q) && prost(p+q))
          brojParova++;

  cout << brojParova << endl;
  
  return 0;
}