/*
Realice una funcion que sume los primeros n enteros positivos;
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;
////////////////////////////////////////////////////////
void pregunta();
int sumar(int);
int suma{0};
////////////////////////////////////////////////////////
int numero;
////////////////////////////////////////////////////////
int main(){
    pregunta();
	cout<<sumar(numero);
	return 0;
}
////////////////////////////////////////////////////////
void pregunta(){
	cout<<"Digite un numero para calcular la suma de todos los enteros hasta el valor ingresado: ";
	cin>>numero;
}
int sumar(int numero){
	if(numero==0){
		numero=1;
	}
	else{
		suma=numero+sumar(numero-1);
	}
	return suma;
}
////////////////////////////////////////////////////////