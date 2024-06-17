#include <iostream>
#include <vector>

using namespace std;

void merge( vector<int> &a, int i, int m,
            vector<int> &b, int j, int n,
            vector<int> &c, int k){
    while(j <= m && j <= n)
        c[k++] = a[i] <= b[j] ? a[i++] : b[j++];
    while(i <= m)
        c[k++] = a[i++];
    while(j <= n)
        c[k++] = b[j++];
}

void merge_sort(vector<int> &a, int l, int d, vector<int> &tmp){
    if(l < d){
        int s = l + (d - l) / 2;
        merge_sort(a, l, s, tmp);
        merge_sort(a, s + 1, d, tmp);

        merge(a, l, s, a, s + 1, d, tmp, l);
        for(int i = l; i <= d; i++)
            a[i] = tmp[i];
    }
}

void merge_sort(vector<int> &a){
    vector<int> tmp(a.size());
    merge_sort(a, 0, a.size() - 1, tmp);
}