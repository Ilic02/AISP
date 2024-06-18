// Program predstavlja primer za pohlepne algoritme
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int novcaniceZaVracanjeKusura(vector<int> &novcanice, int cena){
    sort(rbegin(novcanice), rend(novcanice));

    int brojNovcanica = 0;

    for(int novcanica : novcanice){
        while(cena >= novcanica){
            cena -= novcanica;
            brojNovcanica++;
        }
        if(cena == 0)
            break;
    }

    return cena == 0 ? brojNovcanica : -1;
}

int main(){
    vector<int> novcanice = {1, 2, 5, 10, 20, 50, 100};
    int cena = 143;

    int brojNovcanica = novcaniceZaVracanjeKusura(novcanice, cena);

    if(brojNovcanica != -1)
        cout << "Minimalan broj novcanica je: " << brojNovcanica << endl;
    else
        cout << "Nije moguce tacno sastaviti zadatu sumu." << endl;

    return 0;
}