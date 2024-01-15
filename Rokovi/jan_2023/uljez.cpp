#include <iostream>
#include <string>
#include <vector>

using namespace std;

void uljez(string &s, int i, int k, int brojJedinica)
{
    if (brojJedinica > k || brojJedinica + (s.length() - i) < k)
        return;
    if (i == s.length())
        cout << s << endl;
    else
    {
        if (s[i] == '.')
        {
            for (int x = '1'; x <= '3'; x++)
            {
                s[i] = x;
                uljez(s, i + 1, k, brojJedinica + (x == '1' ? 1 : 0));
            }
            s[i] = '.';
        }
        else
            uljez(s, i + 1, k, brojJedinica + (s[i] == '1' ? 1 : 0));
    }
}

void uljez(string &s, int k)
{
    uljez(s, 0, k, 0);
}

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;

    uljez(s, k);

    return 0;
}