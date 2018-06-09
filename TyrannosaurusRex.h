#ifndef TYRANNOSAURUSREX_H
#define TYRANNOSAURUSREX_H
#include "Carnivoros.h"
#include "Dinosaurios.h"

class Tyrannosaurusrex : public Carnivoros{
        private:
            int Colmillos;
            double ConsumoDeCarne;
        public:
            Tyrannosaurusrex();
            Tyrannosaurusrex(int, double);

            //Metodos Set y Get
            int getColmillos();
            void setColmillos(int);

            double getConsumoDeCarne();
            void setConsumoDeCarne(double);
};
#endif