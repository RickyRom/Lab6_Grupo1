#ifndef OVIRAPTOR_H
#define OVIRAPTOR_H
#include <string>
#include "Omnivoros.h"
#include "Dinosaurios.h"

class Oviraptor:public Omnivoros{
    private:
            double alturaCresta;
            string plumaje;

    public:
            Oviraptor();
            Oviraptor(double,string);

            //getters
            double getAlturaCresta();
            string getPlumaje();

            //getters
            void setAlturaCresta(double);
            void setPlumaje(string);

};

#endif