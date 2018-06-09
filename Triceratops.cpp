#include "Triceratops.h"
#include "Herbivoros.h"
#include "Dinosaurios.h"


Triceratops::Triceratops(double plongiCuernos, double plongiCuernoNasal,string pFruFol, int pNumeroIncisivo, string pNombre,string pFecha,double pAltura,
double pPeso,double pLongitud,char pSexo):Herbivoros(pFruFol,  pNumeroIncisivo, pNombre,pFecha, pAltura,
 pPeso, pLongitud, pSexo) {
    longiCuernos = plongiCuernos;
    longiCuernoNasal = plongiCuernoNasal;
}

//getters
double Triceratops::getLongiCuernos() {
    return longiCuernos;
}

double Triceratops::getLongiCuernosNasal() {
    return longiCuernoNasal;
}

//setters
void Triceratops::setLongiCuernos(double lc) {
    longiCuernos = lc;
}

void Triceratops::setLongiCuernosNasal(double lcn) {
    longiCuernoNasal = lcn;
}
