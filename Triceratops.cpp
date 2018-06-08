#include "Triceratops.h"

Triceratops::Triceratops(double plongiCuernos, double plongiCuernoNasal) {
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
