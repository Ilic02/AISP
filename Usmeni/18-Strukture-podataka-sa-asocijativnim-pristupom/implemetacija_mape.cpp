// Implementacija mape preko uredjenog binarnog drveta
#include <iostream>

using namespace std;

struct cvor{
    string kljuc;
    int vrednost;
    cvor *levo, *desno;
};

cvor *napravi_cvor(const string &kljuc, int vrednost){
    cvor *novi = new cvor();
    novi->kljuc = kljuc;
    novi->vrednost = vrednost;
    novi->levo = novi->desno = nullptr;
    return novi;
}

cvor *ubaci(cvor *koren, const string &kljuc, int vrednost){
    if(koren == nullptr)
        return napravi_cvor(kljuc, vrednost);
    if(kljuc < koren->kljuc)
        koren->levo = ubaci(koren->levo, kljuc, vrednost);
    else if(kljuc > koren->kljuc)
        koren->desno = ubaci(koren->desno, kljuc, vrednost);
    else 
        koren->vrednost = vrednost;
    
    return koren;
}

cvor *pronadji(cvor *koren, const string &kljuc){
    if(koren == nullptr)
        return nullptr;
    if(kljuc < koren->kljuc)
        return pronadji(koren->levo, kljuc);
    else if(kljuc > koren->kljuc)
        return pronadji(koren->desno, kljuc);
    
    return koren;
}

bool pronadji(cvor *koren, const string &kljuc, int &vrednost){
    cvor *c = pronadji(koren, kljuc);
    if(c == nullptr)
        return false;
    vrednost = c->vrednost;
    return true;
}

void obrisi_drvo(cvor *koren){
    if(koren != nullptr)
        obrisi_drvo(koren->levo);
        obrisi_drvo(koren->desno);
        delete koren;
}