#include <iostream>
#include "ClaseDerivada.h"

int main(int argc, char** argv) {

	ClaseDerivada* derivada = new ClaseDerivada(1,2);
	cout<<endl;
	delete derivada;
	return 0;
}
