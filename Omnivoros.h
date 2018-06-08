#ifndef OMNIVOROS_H
#define OMNIVOROS_H
#include "Dinosaurios.h"

class Omnivoros:public Dinosaurios {
    private: 
            int numMolares;
            int numColmillos;

    public:
            Omnivoros();
            Omnivoros(int,int);

            //getters
            int getNumMolares();
            int getNumColmillos();

            //setters
            void setNumMolares(int);
            void setNumColmillos(int);

};

#endif