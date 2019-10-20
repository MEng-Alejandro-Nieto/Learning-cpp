/*
Rellenar un arreglo con n numeros, posteriormente utilizando punteros 
determinar el menor elemento del arreglo
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main(){
    int array[100], n,*dir_array,menor;
    dir_array=array;
    cout<<"Numero de elementos: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Elemento ["<<i<<"]: "; cin>>array[i];
    }
    menor=*dir_array;
    for(int i=0;i<n;i++){
        if(*dir_array<menor){
            menor=*dir_array;
        }
        dir_array++;
    }
    cout<<"El menor es: "<<menor;
}














