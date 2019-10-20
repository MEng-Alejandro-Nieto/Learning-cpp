/*
Transmision  de arreglos
Ejemplo: hallar el maximo valor de un arreglo
*/
#include <iostream>
#include <stdlib.h>
using std:: cin; using std::cout; using std::endl;
//////////////////////////////////////////////////////////////////
int mayor(int *,int);
//////////////////////////////////////////////////////////////////
int main(){
    int n=5;
    int array[n]={3,5,2,8,1};
    cout<<mayor(array,n);
    return 0;
}
//////////////////////////////////////////////////////////////////
int mayor(int *dir_vec,int n){
    int max=dir_vec[0];
    for(int i=0;i<n;i++){
        if(*dir_vec>max){
            max=*dir_vec;
        }
        *dir_vec++;
    }
    return max;
}








