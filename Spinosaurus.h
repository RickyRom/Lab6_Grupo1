#ifndef SPINOSAURUS_H
#define SPINOSAURUS_H
#include "Carnivoros.h"
#include "Dinosaurios.h"

class Spinosaurus : public Carnivoros{
        private:
            double EspinaNeural,LongitudBrazos;
        public:
            Spinosaurus();
            Spinosaurus(double,double);

            //Metodos Set y Get 
            double getEspinaNeural();
            void setEspinaNeural(double);

            double getLongitudBrazos();
            void setLongitudBrazos(double);
};
#endif