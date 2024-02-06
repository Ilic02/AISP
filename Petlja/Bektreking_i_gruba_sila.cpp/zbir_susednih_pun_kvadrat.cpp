#include <iostream>
#include <vector>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

bool zbir_susednih_pun_kvadrat(vector<int>& v, int m, vector<bool>& iskoriscen, vector<int>& kvadrati){
    if(m == v.size()){
        ispisi(v);
        return true;
    }
    else{
        for(int k : kvadrati){
            int dopuna = k - v[m-1];
            if(1 <= dopuna && dopuna <= v.size() && !iskoriscen[dopuna]){
                v[m] = dopuna;
                iskoriscen[dopuna] = true;
                if(zbir_susednih_pun_kvadrat(v, m+1, iskoriscen, kvadrati))
                    return true;
                iskoriscen[dopuna] = false;
            }
        }
    }
    return false;
}

bool zbir_susednih_pun_kvadrat(int n){
    vector<int> v(n);
    vector<bool> iskoriscen(n+1, false);
    vector<int> kvadrati;
    for(int k = 2; k*k <= n+(n-1); k++)
        kvadrati.push_back(k*k);

    for(int i = 1; i<=n; i++){
        v[0] = i;
        iskoriscen[i] = true;
        if(zbir_susednih_pun_kvadrat(v, 1, iskoriscen, kvadrati))
            return true;
        iskoriscen[i] = false;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    if(!zbir_susednih_pun_kvadrat(n))
        cout << "nema\n";

    return 0;
}
