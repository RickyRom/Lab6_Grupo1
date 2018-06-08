#include "Marinos.h"

Marinos::Marinos(int pNumAletas, string pTipo) {
    numAletas = pNumAletas;
    tipo = pTipo;
}

//getters
int Marinos::getNumAletas() {
    return numAletas;
}

string Marinos::getTipo() {
    return tipo;
}

//setters
void Marinos::setNumAletas(int na) {
    numAletas = na;
}

void Marinos::setTipo(string tip) {
    tipo = tip;
}