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
#include <vector>

/*using std::cout;
using std::endl;
using std::cin;
using std::string;*/

using namespace std; 

int main() {
    int opcion;
	do{
    Dinosaurios* dino;
    vector<Dinosaurios> dinos;
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
                cin>>Longitud;
                cout<<"Ingrese el Sexo: "<<endl;
                cin>>Sexo;

                dino = new Dinosaurios(nombre,fecha,Altura,Peso,Longitud,Sexo);
                dinos.push_back(*dino);

                int opn;
                do {
                    cout<<"TIPOS DE DINOSAURIOS"<<endl;
		            cout<<"1.- Carnivoros"<<endl;
		            cout<<"2.- Herbivoros"<<endl;
		            cout<<"3.- Omnivoros"<<endl;
                    cout<<"4.- Aereos"<<endl;
                    cout<<"5.- Marinos"<<endl;
                    cout<<"6.- Salir"<<endl;
                    cin>>opn;
                    
                    switch (opn)
                    {
                        case 1:{
                            string TipoCarnivoro, OrganoDepredador;
                            cout<<"Ingrese el tipo de carnivoro(Cazador o Carroñero): "<<endl;
                            cin>> TipoCarnivoro;
                            cout<<"Ingrese el tipo de Organo(Dientes o Garras): "<<endl;
                            cin>>OrganoDepredador;


                        }
                            
                            break;
                    
                        case 2:

                            break;
                        case 3:

                            break;
                        case 4:

                            break;
                        case 5:

                            break;
                        case 6:
                            break;        
                    }
                    
                }while(opn != 6);                
                
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