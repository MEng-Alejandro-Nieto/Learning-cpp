#include <iostream>
using std::cin; using std::cout; using std::endl;
////////////////////////////////////////////////////////////
struct complejo{
	float real, imaginaria;
}p1,p2;
////////////////////////////////////////////////////////////
void pregunta();
complejo suma(complejo,complejo);
////////////////////////////////////////////////////////////
int main(){
	pregunta();
	cout<<suma(p1,p2).real<<" + i"<<suma(p1,p2).imaginaria;
	
	
	return 0;
}
////////////////////////////////////////////////////////////
void pregunta(){
	cout<<"1 numero complejo"<<endl;
	cout<<"parte real: "; cin>>p1.real;
	cout<<"parte imaginaria: "; cin>>p1.imaginaria;

	cout<<"2 numero complejo"<<endl;
	cout<<"parte real: "; cin>>p2.real;
	cout<<"parte imaginaria: "; cin>>p2.imaginaria;
}

complejo suma(complejo p1,complejo p2){
	p1.real+=p2.real;
	p1.imaginaria+=p2.imaginaria;
	return p1;
}