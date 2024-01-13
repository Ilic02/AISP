#include <iostream>
#include <queue>

using namespace std;

int josif(int n, int m) {
  queue<int> red;
  for (int i = 0; i < n; i++)
    red.push(i);
  while (red.size() > 1) {
    for (int i = 0; i < m - 1; i++) {
      red.push(red.front());
      red.pop();
    }
    red.pop();
  }
  return red.front();
}

int main() {
  int n;
  cin >> n;
  int m;
  cin >> m;
  cout << josif(n, m) << endl;
  return 0;
}