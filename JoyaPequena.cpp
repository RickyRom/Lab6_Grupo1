#include <iostream>
#include "Carnivoros.h"
#include "Dinosaurios.h"
#include "Herbivoros.h"
#include "Spinosaurus.h"
#include "TyrannosaurusRex.h"
#include "Oviraptor.h"
#include "Aereos.h"
#include "Marinos.h"
#include "Triceratops.h"
#include "Omnivoros.h"
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string; 

int main() {
    int opcion;
	do{
		cout<<"Bienvenido a Joya Pequeña"<<endl;
		cout<<"1.- Agregar Dinosaurios"<<endl;
		cout<<"2.- Eliminar"<<endl;
		cout<<"3.- Ver"<<endl;
        cout<<"4.- Salir"<<endl;
		cin>> opcion;
		switch (opcion) {

			case 1:{
                string nombre, fecha;
                double Altura, Peso, Longitud;
                char Sexo;

                cout<<"Ingrese el Nombre: "<<endl;
                cin>> nombre;
                cout<<"Ingrese la fecha de creacion: "<<endl;
                cin>>fecha;
                cout<<"Ingrese la Altura: "<<endl;
                cin>>Altura;
                cout<<"Ingrese el peso: "<<endl;
                cin>>Peso;
                cout<<"Ingrese la Longitud: "<<endl;
                cout<<"Ingrese el Sexo: "<<endl;
                cin>>Sexo;

                
                
				break;
            }
				
			case 2:{

                break;
            }
		
            case 3: {

                break;
            }
        
			case 4:
				cout<<"Tenga Buen Dia"<<endl;
				break;	
		}
	}while(opcion != 4);
}