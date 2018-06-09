#ifndef DINOSAURIOS_H
#define DINOSAURIOS_H

#include <iostream>
using namespace std;

class Dinosaurios{

  protected:
    string Nombre, Fecha;
    double Altura, Peso, Longitud;
    char Sexo;

  public:
    //contructor
    Dinosaurios();
    Dinosaurios(string,string,double, double, double, char);

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