#include <iostream>
#include <vector>

const int n = 9;

using namespace std;

bool sudoku(vector<string>& s, int pos){
    int i = pos / n, j = pos % n;

    if(pos == n * n)
        return true;

    if(s[i][j] != '0')
        return sudoku(s, pos + 1);

    for(char c = '1'; c <= '9'; c++){
        s[i][j] = c;
        if(provera(s, i, j))
            if(sudoku(s, pos+1))
                return true;
    }
    s[i][j] = '0';
    return false;
}

int main(int argc, char const *argv[])
{
    vector<string> s(n);
    for(int i = 0; i<n; i++)
        cin >> s[i];

    sudoku(s, 0);
    return 0;
}
