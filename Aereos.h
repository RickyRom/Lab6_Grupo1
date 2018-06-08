#ifndef AEREOS_H
#define AEREOS_H
#include "Dinosaurios.h"

class Aereos:public Dinosaurios {
    private:
            string vuela;
            string plumas;

    public: 
            Aereos();
            Aereos(string,string);

            //getters
            string getVuela();
            string getPlumas();

            //getters
            void setVuela(string);
            void setPlumas(string);
};

#endif