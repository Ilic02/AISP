// Drvoseča treba da naseče određenu količinu drveta i ima testeru koju može da podešava da seče na bilo
// kojoj celobrojnoj visini (u metrima). Pošto testera seče samo drvo iznad visine na koju je postavljena,
// što je testera više, naseći će se manje drveta. Pošto drvoseča brine o okolini, on ne želi da naseče više
// drveta nego što mu je potrebno. Napiši program koji određuje najvišu moguću celobrojnu visinu testere,
// tako da drvoseča dobije dovoljno drveta (pretpostavi da uvek postoji dovoljno drveta).
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int testera(vector<int>& v, int kolicina){
    int od_visina = 0;
    int do_visina = *max_element(begin(v), end(v));
    while(od_visina <= do_visina){
        int visina = od_visina + (do_visina - od_visina) / 2;
        int naseceno = 0;
        for(int i : v){
            if(i >= visina)
                naseceno += (i - visina);
        }
        if(naseceno >= kolicina)
            od_visina = visina + 1;
        else
            do_visina = visina - 1;
    }
    return do_visina;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    int kolicina;
    cin >> kolicina;

    cout << testera(v, kolicina) << endl;

    return 0;
}