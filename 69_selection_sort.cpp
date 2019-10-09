#include <iostream>
#include <conio.h>
using std::cin; using std::cout; using std::endl;

int main(){
	int length,min{0},z{0};
	int arreglo[]={1,9,5,6,3,2,47,8,11,16,14,18,17,19,20,21,22,19,18,17,1,5,4,6,3,19,1,7,1,2,3};
	length=sizeof(arreglo)/sizeof(arreglo[0]);
	
	for (int i{0};i<length;i++){
		min=arreglo[i];
		for (int j=i;j<length;j++){
			if ((j>0) && (arreglo[j]<min)){
				min=arreglo[j];
				z=j;
			}
		}
		arreglo[z]=arreglo[i];
		arreglo[i]=min;
	}
	for (int k{0};k<length;k++){
		cout<<arreglo[k]<<endl;
	}
	
	getch();
	return 0;
}
