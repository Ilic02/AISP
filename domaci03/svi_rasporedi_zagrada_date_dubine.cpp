#include <iostream>
#include <vector>

using namespace std;

int n, d;
vector<string> v;

void solve(string s, int op, int cl, int depth)
{
    if (s.length() == n)
    {
        if (depth == 0)
        {
            v.push_back(s);
        }
        return;
    }

    if (op < n / 2 && depth < d)
    {
        solve(s + '(', op + 1, cl, depth + 1);
    }

    if (cl < op)
    {
        solve(s + ')', op, cl + 1, depth - 1);
    }
}

int main()
{
    cin >> n >> d;
    solve("", 0, 0, 0);

    for (const string &s : v)
    {
        cout << s << endl;
    }

    return 0;
}