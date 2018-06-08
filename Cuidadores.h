#ifndef CUIDADORES_H
#define CUIDADORES_H
#include <string>
using std::string;
class Cuidadores {
    private:
            string nombre;
            int id;
            string sexo;
            int edad;

    public:
            Cuidadores();
            Cuidadores(string,int,string,int);

            //getters
            string getNombre();
            int getID();
            string getSexo();
            int getEdad();

            //setters
            void setNombre(string);
            void setID(int);
            void setSexo(string);
            void setEdad(int);
};

#endif