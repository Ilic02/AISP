// Implementacija steka preko jednostruko povezane liste
#include <iostream>

struct cvor{
    int vrednost;
    cvor *sledeci;
};

cvor *napravi_cvor(int vrednost, cvor *sledeci){
    cvor *novi = new cvor();
    novi->vrednost = vrednost;
    novi->sledeci = sledeci;
    return novi;
}

// Dodavanje elementa na pocetak
cvor *dodaj(cvor *pocetak, int vrednost){
    return napravi_cvor(vrednost, pocetak);
}

// Brisanje elementa sa pocetka
cvor *obrisi(cvor *pocetak){
    cvor *sledeci = pocetak->sledeci;
    delete pocetak;
    return sledeci;
}

// Brisanje cele liste
void obrisi_listu(cvor *pocetak){
    while(pocetak != nullptr){
        cvor *sledeci = pocetak->sledeci;
        delete pocetak;
        pocetak = sledeci;
    }
}