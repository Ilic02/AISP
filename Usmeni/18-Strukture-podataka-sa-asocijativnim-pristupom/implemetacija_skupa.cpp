// Implementacija skupa preko uredjenog binarnog drveta
#include <iostream>

using namespace std;

struct cvor{
    int x;
    cvor *levo, *desno;
};

cvor *napraviCvor(int x){
    cvor *novi = new cvor();
    novi->levo = novi->desno = nullptr;
    novi->x = x;
    return novi;
}

cvor *ubaci(cvor *drvo, int x){
    if(drvo == nullptr)
        return napraviCvor(x);

    if(x < drvo->x)
        drvo->levo = ubaci(drvo->levo, x);
    else if(x > drvo->x)
        drvo->desno = ubaci(drvo->desno, x);

    return drvo;
}

int minimun(cvor *drvo){
    while(drvo->levo != nullptr)
        drvo = drvo->levo;
    
    return drvo->x;
}

int maksimum(cvor *drvo){
    while(drvo->desno != nullptr)
        drvo = drvo->desno;

    return drvo->x;
}

// Brisanje date vrednosti
// Iz datog drveta se uklanja cvor sa najmanjom vrednoscu
cvor *obrisiMin(cvor *drvo, int &x){
    if(drvo == nullptr)
        return nullptr;

    if(drvo->levo == nullptr){
        cvor *desno = drvo->desno;
        x = drvo->x;
        delete drvo;
        return desno;
    }

    drvo->levo = obrisiMin(drvo->levo, x);
    return drvo;
}

// Iz datog drveta se uklanja dati cvor sa datom vrednoscu
cvor *obrisi(cvor *drvo, int x){
    if(drvo == nullptr)
        return nullptr;

    if(x < drvo->x)
        drvo->levo = obrisi(drvo->levo, x);
    else if(x > drvo->x)
        drvo->desno = obrisi(drvo->desno, x);
    else{
        if(drvo->desno == nullptr){
            cvor *levo = drvo->levo;
            delete drvo;
            return levo;
        }
        else{
            int min;
            drvo->desno = obrisiMin(drvo->desno, min);
            drvo->x = min;
        }
    }

    return drvo;
}

// Brisanje celog drveta
void obrisi(cvor *drvo){
    if(drvo != nullptr){
        obrisi(drvo->levo);
        obrisi(drvo->desno);
        delete drvo;
    }
}