/*
Pedir su nombre al usuario y devolver el numero de vocales que hay
utilizando punteros
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using std::cin; using std::cout; using std::endl;
////////////////////////////////////////////////////////////////////
char frase[30], *dir_frase;
int contador;
////////////////////////////////////////////////////////////////////
void pregunta();
void contador_vocales(char *);
////////////////////////////////////////////////////////////////////
int main(){
    pregunta();
    dir_frase=&frase[0];
    contador_vocales(dir_frase);
    return 0;
}
////////////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Cual es tu nombre: "; gets(frase);
}

void contador_vocales(char *frase){
	int a=0,e=0,i=0,o=0,u=0;
    for(int j=0;j<30;j++){	
		switch(*(frase+j)){
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
		}
    }
    cout<<"a: "<<a<<endl;
    cout<<"e: "<<e<<endl;
    cout<<"i: "<<i<<endl;
    cout<<"o: "<<o<<endl;
    cout<<"u: "<<u<<endl;
}
////////////////////////////////////////////////////////////////////
