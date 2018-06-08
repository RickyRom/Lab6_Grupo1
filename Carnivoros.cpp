#include "Carnivoros.h"
#include <string>
using namespace std;

//Metodos get
string Carnivoros::getTipoCarnivoro(){
    return TipoCarnivoro;
}
string Carnivoros::getOrganoDepredador(){
    return OrganoDepredador;
}

//Metodos Set
void Carnivoros::setTipoCarnivoro(string pTipoCarnivoro){
    this->TipoCarnivoro = pTipoCarnivoro; 
}
void Carnivoros::setOrganoDepredador(string pOrganoDepredador){
    this->OrganoDepredador = pOrganoDepredador;
}
