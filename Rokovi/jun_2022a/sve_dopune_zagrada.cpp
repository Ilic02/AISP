#include <iostream>
#include <string>

using namespace std;

void dopuni_zagrade(string &s, int i, int d)
{
    int n = s.length();
    if (i == n)
        cout << s << endl;
    else
    {
        if (s[i] == '(')
        {
            if (n - i >= d + 1)
                dopuni_zagrade(s, i + 1, d + 1);
        }
        else if (s[i] == ')')
        {
            if (d > 0)
                dopuni_zagrade(s, i + 1, d - 1);
        }
        else if (s[i] == '.')
        {
            if (n - i >= d + 1)
            {
                s[i] = '(';
                dopuni_zagrade(s, i + 1, d + 1);
            }
            if (d > 0)
            {
                s[i] = ')';
                dopuni_zagrade(s, i + 1, d - 1);
            }
            s[i] = '.';
        }
    }
}

void dopuni_zagrade(string &s)
{
    dopuni_zagrade(s, 0, 0);
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    dopuni_zagrade(s);

    return 0;
}
