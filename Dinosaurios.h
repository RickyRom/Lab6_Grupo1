#ifndef DINOSAURIOS_H
#define DINOSAURIOS_H

#include <iostream>
using namespace std;

class Dinosaurios{

  private:
    string Nombre, Fecha;
    double Altura, Peso, Longitud;
    char Sexo;

  public:
    //contructor
    Dinosaurios();
    Dinosaurios(string, double, double, double, int, char);

    //metodos set y get
    //metodo string para el nombre
    string getNombre();
    void setNombre(string);
    string getFecha();
    void setFecha(string);

    //Metodos double
    double getAltura();
    void setAltura(double);
    double getPeso();
    void setPeso(double);
    double getLongitud();
    void setLongitud(double);

    //metodo char M o F
    char getSexo();
    void setSexo(char);
};
#endif