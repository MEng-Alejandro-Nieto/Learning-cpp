#include <iostream>
#include "Animal.h"
using namespace std;

class Animal_carnivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"El animal carnivoro se alimenta de carne"<<endl;
		}
};
