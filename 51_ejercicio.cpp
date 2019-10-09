/* 
Desarrolle un programa que determine si una matriz es simetrica o no, Una matriz es simetrica si es cuadrada 
y si es igual a su matriz transpuesta
*/ 

#include <iostream>

using std:: cin; using std:: cout; using std:: endl;

int main(){
	
	int matriz1[3][3]={{1,1,3},{1,20,4},{4,4,7}};	
	int transpuesta[3][3], validador=1;
	for(int i{0};i<3;i++){
		for(int j{0};j<3;j++){
			transpuesta[j][i]=matriz1[i][j];
            if(transpuesta[j][i]!=matriz1[j][i]){
                validador=0;
				j=3;i=3;
            }
		}
	}
    if(validador==1){
        cout<<"La matriz es simetrica";
    }
    else{
        cout<<"La matriz no es simetrica";
    }
	
}