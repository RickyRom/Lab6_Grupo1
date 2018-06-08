#ifndef MARINOS_H
#define MARINOS_H
#include "Dinosaurios.h"

class Marinos:public Dinosaurios {
    private:
            int numAletas;
            string tipo;

    public: 
            Marinos();
            Marinos(int, string);

            //getters
            int getNumAletas();
            string getTipo();

            //setters
            void setNumAletas(int);
            void setTipo(string);
};

#endif