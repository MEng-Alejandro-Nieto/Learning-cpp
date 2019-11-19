#include <iostream>
#include "Ejemplo.h"
using namespace std;

int main(int argc, char** argv) {
	Ejemplo <int,float> objeto(1,9.85);
	objeto.mostrar_datos();
	objeto.set_dato1(10);
	objeto.set_dato2(5.4);
	cout<<objeto.get_dato1()<<endl;
	cout<<objeto.get_dato2()<<endl;	
	return 0;
}
