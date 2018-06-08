#include "Spinosaurus.h"
#include <iostream>
using namespace std;

//Metodos Get
double Spinosaurus::getEspinaNeural(){
    return EspinaNeural;
}
double Spinosaurus::getLongitudBrazos(){
    return LongitudBrazos;
}

//Metodos Set
void Spinosaurus::setEspinaNeural(double pEspinaNeural){
    this-> EspinaNeural=pEspinaNeural;
}
void Spinosaurus::setLongitudBrazos(double pLongitudBrazos){
    this->LongitudBrazos=pLongitudBrazos;
}