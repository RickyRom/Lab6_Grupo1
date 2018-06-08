#include "Omnivoros.h"

Omnivoros::Omnivoros(int pnumMolares, int pnumColmillos) {
    numMolares = pnumMolares;
    numColmillos = pnumColmillos;
}

//getters
int Omnivoros::getNumMolares() {
    return numMolares;
}

int Omnivoros::getNumColmillos() {
    return numColmillos;
}

//setters
void Omnivoros::setNumMolares(int nm) {
    numMolares = nm;
}

void Omnivoros::setNumColmillos(int nc) {
    numColmillos = nc;
}