#include <iostream>
#include "Planta.h"
#include "Animal_carnivoro.h"
#include "Animal_herbivoro.h"
using namespace std;

int main(int argc, char** argv) {
	Planta* planta1 = new Planta();
	Animal_carnivoro* leon = new Animal_carnivoro();
	Animal_herbivoro* vaca = new Animal_herbivoro();

	planta1->alimentarse();
	leon->alimentarse();
	vaca->alimentarse();		
	return 0;
}
