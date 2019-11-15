#include <iostream>
#include "Animal.h"
using namespace std;

class Animal_herbivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"El animal herbivoro se alimenta de hierbas"<<endl;
		}
};
