#include <iostream>
#include <string.h>
#include <conio.h>

using std::cin; using std::cout; using std::endl;

int main(){
	int arreglo[]={5,9,1,6,3,8,4,2,7,10,20,19,18,17,16,15,14,13,12,11,15,17,1,3};int pos{0},valor{0},aux{0},length{0};
	length=sizeof(arreglo)/sizeof(arreglo[0]);
	for(int i{0};i<length;i++){
		pos=i;
		while((pos>0) && (arreglo[pos]<arreglo[pos-1])){
			aux=arreglo[pos];
			arreglo[pos]=arreglo[pos-1];
			arreglo[pos-1]=aux;
			pos--;
		}
		
	}
	
	for(int i=0;i<length;i++){
		cout<<arreglo[i]<<endl;
	}
	getch();
	return 0;
}













