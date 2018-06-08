#ifndef CARNIVOROS_H
#define CARNIVOROS_H
#include "Dinosaurios.h"
#include <iostream>
using namespace std;


class Carnivoros : public Dinosaurios{
        private:
            string TipoCarnivoro, OrganoDepredador;

        public:
            Carnivoros();
            Carnivoros(string, string);

            //Metodos string 
            string getTipoCarnivoro();
            void setTipoCarnivoro(string);
            string getOrganoDepredador();
            void setOrganoDepredador(string);
            
};
#endif