#include "Dinosaurios.h"
#include <string>
using namespace std;

//Metodos Getter
string Dinosaurios::getNombre(){
    return Nombre;
}
double Dinosaurios::getAltura(){
    return Altura;
}
double Dinosaurios::getPeso(){
    return Peso;
}
double Dinosaurios::getLongitud(){
    return Longitud;
}
string Dinosaurios::getFecha(){
    return Fecha;
}
char Dinosaurios::getSexo(){
    return Sexo;
}

//Metodos Setter
void Dinosaurios::setNombre(string pNombre){
    this->Nombre = pNombre;
}
void Dinosaurios::setAltura(double pAltura){
    this->Altura=pAltura;
}
void Dinosaurios::setPeso(double pPeso){
    this->Peso=pPeso;
}
void Dinosaurios::setLongitud(double pLongitud){
    this-> Longitud=pLongitud;
}
void Dinosaurios::setFecha(string pFecha){
    this->Fecha=pFecha;
}
void Dinosaurios::setSexo(char pSexo){
    this->Sexo=pSexo;
}








