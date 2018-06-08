#ifndef HERBIVOROS_H
#define HERBIVOROS_H
#include <string>
#include "Dinosaurios.h"

class Herbivoros:public Dinosaurios {
    private:
            string FruFoli;
            int numeroIncisivos;

    public:
            Herbivoros();
            Herbivoros(string, int);

            //getters
            string getFruFoli();
            int getNumeroIncisivos();

            //setters
            void setFruFoli(string);
            void setNumeroIncisivos(int);
};

#endif