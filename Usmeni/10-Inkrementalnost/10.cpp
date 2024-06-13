// Program inkrementalno racuna prekisne zbirove
#include <iostream>
#include <vector>

using namespace std;

void prefiksniZbirovi(vector<int> &niz){
    int zbir = niz[0];
    cout << zbir << " ";
    for(int i = 1; i < niz.size(); i++){
        zbir += niz[i];
        cout << zbir << " ";
    }

    cout << endl;
}

int main(){
    int n;
    cin >> n;

    vector<int> niz(n);
    for(int i = 0; i < n; i++)
        cin >> niz[i];

    prefiksniZbirovi(niz);


    return 0;
}