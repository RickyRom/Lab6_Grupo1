#include "Herbivoros.h"
#include "Dinosaurios.h"

Herbivoros::Herbivoros(string pFruFoli, int pNumeroIncisivo, string pNombre,string pFecha,double pAltura,
double pPeso,double pLongitud,char pSexo):Dinosaurios(pNombre, pFecha, pAltura, pPeso, pLongitud,pSexo){
    FruFoli = pFruFoli;
    numeroIncisivos = pNumeroIncisivo;
}

//GETTERS
string Herbivoros::getFruFoli() {
    return FruFoli;
}

int Herbivoros::getNumeroIncisivos() {
    return numeroIncisivos;
}

//SETTERS

void Herbivoros::setFruFoli(string frufol) {
    FruFoli = frufol;
}

void Herbivoros::setNumeroIncisivos(int ni) {
    numeroIncisivos = ni;
}
