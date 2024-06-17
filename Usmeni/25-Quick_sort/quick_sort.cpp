#include <iostream>
#include <vector>

using namespace std;

// Sortira segment pozicija [l, d] u nizu a
void quick_sort(vector<int> &a, int l, int d){
    // Ako segment [l, d] jedan ili nula elementa on je vec sortiran
    if(l < d){
        // Za pivot uzimamo proizvoljan element segmenta
        swap(a[l], a[l + rand() % (d - l + 1)]);
        // Particionisemo niz tako da se u njemu prvo javljaju elementi
        // manji ili jednako pivotu, a zatim veci od pivota
        // Tokom rada vazi [l, k] su manji ili jednaki pivotu
        // (k, i) su veci od pivota, [i, d] su jos neispitani
        int k = l;
        for(int i = l + 1; i <= d; i++)
            if(a[i] <= a[l])
                swap(a[i], a[++k]);
        // Razmenjujemo pivot sa poslednjim manjim ili jednakim elementom
        swap(a[l], a[k]);
        // Rekurzivno sortiramo deo niza levo i desno od pivota
        quick_sort(a, l, k - 1);
        quick_sort(a, k + 1, d);
    }
}

void quick_sort(vector<int> &a){
    quick_sort(a, 0, a.size() - 1);
}