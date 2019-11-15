#include <iostream>
#include "Servivo.h"
using namespace std;

class Planta : public Servivo{
	public:
		void alimentarse(){
			cout<<"La planta se alimenta mediante la fotosintesis"<<endl;
		}		
};
