// Comparar strings con la funcion strcmp()

#include <iostream>
#include <string.h>

using std::cin; using std::cout; using std::endl;

int main(){
	char palabra1[]="zule";	
	char palabra2[]="zule";	

	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas cadenas son iguales";
    }
	else{
		if(strcmp(palabra1,palabra2)>0){
			cout<<"las cadenas son diferentes y la palabra "<<palabra1<<" esta alfabeticamente despues que "<<palabra2;
		}
		else{
			cout<<"las cadenas son diferentes y la palabra "<<palabra2<<" esta alfabeticamente despues que "<<palabra1;
		}
	}
   	return 0;			
}


