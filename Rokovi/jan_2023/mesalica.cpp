#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // na kojoj poziciji se nalazi ucitana vrednost niza
    unordered_map<int, int> pozicija;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pozicija[x] = i;
    }
    // na koju poziciju se preslikava pozicija i iz originalnog niza
    vector<int> mesalica(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mesalica[pozicija[x]] = i;
    }
    // promesana verzija ucitanog niza b
    vector<int> b_promesano(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b_promesano[mesalica[i]] = x;
    }
    for (int x : b_promesano)
        cout << x << " ";
    cout << endl;
}