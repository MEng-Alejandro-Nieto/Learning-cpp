#include <iostream>
#include "Heredada.h"

using namespace std;

int main(int argc, char** argv) {
	Heredada* mazda =new Heredada("Mazda","Negro","3 limited",4);
	cout<<mazda->get_numero_puertas()<<endl;
	cout<<mazda->get_color()<<endl;
	cout<<mazda->get_marca()<<endl;
	return 0;
}
