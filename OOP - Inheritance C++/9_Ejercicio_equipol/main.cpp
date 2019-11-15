/*
Crear un programa para simular un equipo de futbol (futbolista, entrenador y doctor)
para lo cual tendremos lo siguiente:

1. Una clase base Persona, que tendra los siguientes datos: nombre, apellido, edad.
2. La clase derivada futbolista tendra los siguientes datos: dorsal y posicion.
3. la clase derivada entrenador tendra de dato la estrategia que utiliza. 
4. La clase derivada Medico, la titulacion y los anos de experiencia.

*/

#include <iostream>
#include <conio.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"
using namespace std;

Persona* equipo[4];

// Prototipo de Funcion
void viaje_equipo();
void Entrenamiento();
void Partido_futbol();
/*
void Planificar_entrenamiento();
void Entrevista();
void Curar_lesion();
*/
int main(int argc, char** argv) {
	int opcion{0};
	equipo[0]= new Futbolista("David","Beckham",40,9,"atacante");
	equipo[1]= new Futbolista("James","Rodriguez",28,10,"volante");
	equipo[2]= new Entrenador("Jose","Pekerman",60,"4-4-2");
	equipo[3]= new Medico("Chapatin","Bonaparte",70,"Fisioterapeuta",20);
	
	do{
		cout<<"\t .:MENU:."<<endl;
		cout<<"1. Viaje en equipo"<<endl;
		cout<<"2. Entrenamiento"<<endl;
		cout<<"3. Partido de futbol"<<endl;
		cout<<"4. Planificar entrenamiento"<<endl;
		cout<<"5. Entrevista"<<endl;
		cout<<"6. Curar lesion"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"Ingrese opcion: "; cin>>opcion;
		switch(opcion){
			case 1: viaje_equipo(); break;
			case 2: Entrenamiento(); break;
			case 3: Partido_futbol(); break;
			//case 4: Planificar_entrenamiento(); break;
			//case 5: Entrevista(); break;
			//case 6: Curar_lesion(); break;
			case 7:	cout<<"Adios :)"<<endl; break;
		}
	}while(opcion!=7);

	
	getch();
	return 0;
}

	
void viaje_equipo(){
	for(int i{0};i<4;i++){
		equipo[i]->viajar();
		} 
	}

void Entrenamiento(){
	for(int i{0};i<4;i++){
		equipo[i]->entrenamiento();
	} 	
	}

void Partido_futbol(){
	for(int i{0};i<4;i++){
		equipo[i]->partido_futbol();
		} 
	}
