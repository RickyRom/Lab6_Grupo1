#include "Herbivoros.h"

Herbivoros::Herbivoros(string pFruFol, int pNumeroIncisivo) {
    FruFoli = pFruFol;
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
