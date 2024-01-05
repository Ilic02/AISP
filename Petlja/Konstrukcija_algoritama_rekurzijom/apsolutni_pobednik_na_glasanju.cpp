#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int apsolutniPobednik(const vector<int>& glasovi) {
  // ukupan broj glasova
  int n = glasovi.size();
  // pravimo sortiranu kopiju niza glasova
  auto glasovi_s = glasovi;
  // sortiramo glasove za sve kandidate
  sort(begin(glasovi_s), end(glasovi_s));

  // duzina tekuce serije jednakih elemenata
  // element glasovi[0] zapocinje prvu seriju
  int broj_glasova = 1;
  for (int i = 1; i <= n; i++)
    if (i == n || glasovi_s[i] != glasovi_s[i-1]) {
      // serija jednakih elemenata je upravo zavrsena
      if (broj_glasova > n/2) {
        // ako u upravo zavrsenoj seriji ima vise od n/2 jednakih,
        // onda je u njoj apsolutni pobednik
        return glasovi_s[i-1];
      }
      // element glasovi[i] je zapoceo novu seriju
      broj_glasova = 1;
    } else
      // element glasovi[i] je nastavio tekucu seriju
      broj_glasova++;

  // ne postoji pobednik
  return -1;
}

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> glasovi(n);
  for (int i = 0; i < n; i++)
    cin >> glasovi[i];
  
  int pobednik = apsolutniPobednik(glasovi);
  if (pobednik >= 0)
    cout << pobednik << endl;
  else
    cout << "nema" << endl;
}