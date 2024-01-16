#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int k;
    cin >> k;
    string s;
    cin >> s;

    map<char, int> m;
    for (int i = 0; i < k - 1; i++)
        m[s[i]]++;

    for (int i = k - 1; i < s.size(); i++)
    {
        m[s[i]]++;

        if (m['a'] > m['b'] && m['a'] > m['c'])
            cout << 'a';
        else if (m['b'] > m['a'] && m['b'] > m['c'])
            cout << 'b';
        else if (m['c'] > m['b'] && m['c'] > m['a'])
            cout << 'c';
        else
            cout << '#';

        m[s[i - (k - 1)]]--;
    }
    cout << endl;

    return 0;
}
