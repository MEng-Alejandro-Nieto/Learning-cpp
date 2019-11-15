#include <iostream>
#include "Derivada.h"
using namespace std;

int main(int argc, char** argv){
	
	Derivada* objeto = new Derivada(1,2,3);
	
	cout<<objeto->get_x()<<endl;
	cout<<objeto->get_x1()<<endl;
	cout<<objeto->get_x2()<<endl;
	
	cout<<objeto->get_x()<<endl;
	cout<<objeto->get_x11()<<endl;
	cout<<objeto->get_x22()<<endl;			
	delete objeto;
	
	return 0;
}
