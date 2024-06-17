// Implementacija reda preko jednostruko povezane liste
#include <iostream>

using namespace std;

struct cvor{
    int vrednost;
    cvor *sledeci;
};

cvor *napravi_cvor(int vrednost){
    cvor *novi = new cvor();
    novi->vrednost = vrednost;
    novi->sledeci = nullptr;
    
    return novi;
}

cvor *pocetak = nullptr;
cvor *kraj = nullptr;
int velicina = 0;

void dodaj(int vrednost){
    if(kraj == nullptr)
        pocetak = kraj = napravi_cvor(vrednost);
    else{
        kraj->sledeci = napravi_cvor(vrednost);
        kraj = kraj->sledeci;
    }
    velicina++;
}

bool prazan(){
    return velicina == 0;
}

int pocetni(){
    return pocetak->vrednost;
}

void ukloni(){
    cvor *sledeci = pocetak->sledeci;
    delete pocetak;
    pocetak = sledeci;
    if(pocetak == nullptr)
        kraj = nullptr;
    velicina--;
}