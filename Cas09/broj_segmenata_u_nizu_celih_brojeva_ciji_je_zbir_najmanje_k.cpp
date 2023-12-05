#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int prebroj(int l, int d, int t, vector<int>& v, vector<int>& tmp){
    if(d - l <= 1)
        return 0;
    
    int s = (l + d) / 2;
    int resL = prebroj(l, s, t, v, tmp);
    int resD = prebroj(s, d, t, v, tmp);

    int resUnakrsno = 0;
    int j = l;
    for(int i = s; i < d; i++){
        while(j < s && v[i] - v[j] > t)
            j++;
        resUnakrsno += s - j;
    }

    merge(begin(v) + l, begin(v) + s, begin(v) + s, begin(v) + d, begin(tmp));
    copy(begin(tmp), begin(tmp) + (d-l), begin(v) + l);

    return resL + resD + resUnakrsno;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n+1), tmp(n+1);
    for(int i = 0; i<n; i++)
        cin >> v[i+1];

    int k;
    cin >> k;

    partial_sum(begin(v), end(v), begin(v));

    cout<< prebroj(0, n+1, k, v, tmp);

    return 0;
}