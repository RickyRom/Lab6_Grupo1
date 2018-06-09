#include "Dinosaurios.h"
#include <string>
using namespace std;

Dinosaurios::Dinosaurios(string pNombre,string pFecha,double pAltura,double pPeso,double pLongitud,char pSexo) {
    Nombre = pNombre;
    Fecha = pFecha;
    Altura = pAltura;
    Peso = pPeso;
    Longitud = pLongitud;
    Sexo = pSexo;
}

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
    Nombre = pNombre;
}
void Dinosaurios::setAltura(double pAltura){
    Altura=pAltura;
}
void Dinosaurios::setPeso(double pPeso){
    Peso=pPeso;
}
void Dinosaurios::setLongitud(double pLongitud){
    Longitud=pLongitud;
}
void Dinosaurios::setFecha(string pFecha){
    Fecha=pFecha;
}
void Dinosaurios::setSexo(char pSexo){
    Sexo=pSexo;
}








