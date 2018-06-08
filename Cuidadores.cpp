#include "Cuidadores.h"

Cuidadores::Cuidadores(string pnombre, int pid, string psexo, int pedad) {
    nombre = pnombre;
    id = pid;
    sexo = psexo;
    edad = pedad;
}

//getters
string Cuidadores::getNombre() {
    return nombre;
}

int Cuidadores::getID() {
    return id;
}

string Cuidadores::getSexo() {
    return sexo;
}

int Cuidadores::getEdad() {
    return edad;
}

//setters
void Cuidadores::setNombre(string nom) {
    nombre = nom;
}

void Cuidadores::setID(int Id) {
    id = Id;
}

void Cuidadores::setSexo(string sex) {
    sexo = sex;
}

void Cuidadores::setEdad(int age) {
    edad = age;
}