#ifndef TRICERATOPS_H
#define TRICERATOPS_H
#include "Herbivoros.h"

class Triceratops:public Herbivoros{
    private:
            double longiCuernos;
            double longiCuernoNasal;

    public:
            Triceratops();
            Triceratops(double,double);

            //getters
            double getLongiCuernos();
            double getLongiCuernosNasal();

            //setters
            void setLongiCuernos(double);
            void setLongiCuernosNasal(double);
};

#endif