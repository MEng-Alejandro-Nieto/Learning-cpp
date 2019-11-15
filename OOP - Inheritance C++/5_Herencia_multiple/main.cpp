#include <iostream>
#include "Heredada.h"
using namespace std;

int main(int argc, char** argv) {
	Heredada* objeto = new Heredada("Luis","Alejandro","Nieto");
	cout<<endl;
	//objeto->nombre3<<endl;  ERROR: es de tipo privado de su propia clase
	cout<<objeto->get_nombre1()<<endl; 		//CORRERA: este metodo es heredado publico
	//cout<<objeto->get_nombre2()<<endl;	//ERROR: este metodo es heredado privado
	cout<<objeto->get_nombre3()<<endl;		//CORRERA: este metodo es publico de su propia clase
	delete objeto;
	
	return 0;
}
