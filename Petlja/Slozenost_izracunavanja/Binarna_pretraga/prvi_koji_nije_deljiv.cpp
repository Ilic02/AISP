#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int prviKojiNijeDeljiv(const vector<long long>& a, long long k) {
  int n = a.size();
  int l = 0, d = n;
  while (l < d) {
    int s = l + (d - l) / 2;
    if (a[s] % k != 0)
      d = s;
    else
      l = s + 1;
  }
  return d;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  long long k;
  while (cin >> k)
    cout << prviKojiNijeDeljiv(a, k) << '\n';

  return 0;
}   