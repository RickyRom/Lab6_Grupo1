#include "TyrannosaurusRex.h"
#include <iostream>
using namespace std;

//Metodos Get
int Tyrannosaurusrex::getColmillos(){
    return Colmillos;
}
double Tyrannosaurusrex::getConsumoDeCarne(){
    return ConsumoDeCarne;
}

//Metodos Set
void Tyrannosaurusrex::setColmillos(int pColmillos){
    this->Colmillos=pColmillos;
}
void Tyrannosaurusrex::setConsumoDeCarne(double pConsumoDeCarne){
    this->ConsumoDeCarne=pConsumoDeCarne;
}

