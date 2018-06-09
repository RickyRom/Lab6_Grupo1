#ifndef HERBIVOROS_H
#define HERBIVOROS_H
#include "Dinosaurios.h"
#include <string>

class Herbivoros:public Dinosaurios {
    private:
            string FruFoli;
            int numeroIncisivos;

    public:
            Herbivoros();
            Herbivoros(string, int,string,string,double, double, double, char);

            //getters
            string getFruFoli();
            int getNumeroIncisivos();

            //setters
            void setFruFoli(string);
            void setNumeroIncisivos(int);
};

#endif