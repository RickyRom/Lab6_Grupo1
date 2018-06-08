#include "Aereos.h"

Aereos::Aereos(string pvuela, string pplumas) {
    vuela = pvuela;
    plumas = pplumas;
}

//getters
string Aereos::getVuela() {
    return vuela;
}

string Aereos::getPlumas() {
    return plumas;
}

//setters
void Aereos::setVuela(string va) {
    vuela = va;
}

void Aereos::setPlumas(string plms) {
    plumas = plms;
}