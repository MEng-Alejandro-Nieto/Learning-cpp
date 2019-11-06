#include <iostream>
#include <stdlib.h>
#include "Punto.h"

using std::cin; using std::cout; using std::endl;


int main(int argc, char** argv){
    Punto puntito(2,1); //Creacion de un objeto estatico
    cout<<puntito.getY()<<endl;
	cout<<puntito.getX()<<endl;
	puntito.setX(20);
	puntito.setY(10);
	cout<<puntito.getY()<<endl;
	cout<<puntito.getX()<<endl;
    return 0;
}

