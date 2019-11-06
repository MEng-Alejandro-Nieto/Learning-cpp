#include <iostream>
#include "Perro.h"
using namespace std;

int main(int argc, char** argv) {
	Perro *perro1 = new Perro("tobi","pitbull");
	perro1->MostrarDatos();
	perro1->jugar();
	
	cout<<endl;
	
	Perro perro2("Belen","Beagle");
	perro2.MostrarDatos();
	perro2.jugar();
	
	cout<<endl;
	perro2.~Perro();
	perro2.MostrarDatos();
	perro2.jugar();
	
	delete perro1;
	//perro1.MostrarDatos(); //Ya no se podra llamar el objeto perro1 ya que se elimino
	//perro1.jugar();
	
	return 0;
}
