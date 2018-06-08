#include "Oviraptor.h"

Oviraptor::Oviraptor(double pAlturaCresta, string pPlumaje) {
    alturaCresta = pAlturaCresta;
    plumaje = pPlumaje;
}

//getters
double Oviraptor::getAlturaCresta() {
    return alturaCresta;
}

string Oviraptor::getPlumaje() {
    return plumaje;
}

//setters
void Oviraptor::setAlturaCresta(double ac) {
    alturaCresta = ac;
}

void Oviraptor::setPlumaje(string plu) {
    plumaje = plu;
}
