#include <iostream>
using namespace std;

void Menu(){
	cout<<"\n\t.:MENU:."<<endl;
	cout<<"1. Agregar un nuevo elemento al arreglo"<<endl;
	cout<<"2. Comprobar el espacio en el arreglo"<<endl;
	cout<<"3. Ver arreglo"<<endl;
	cout<<"4. Vaciar el arreglo"<<endl;
	cout<<"5. Salir"<<endl;	
}

void pregunta(int &opcion){
	do{

		cout<<"Seleccione opcion: "; cin>>opcion;
	}while(opcion<1 || opcion>5);
}


