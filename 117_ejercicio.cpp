/*
Rellenar un array de 10 numeros, posteriormente utilizando punteros
indicar cuales son numeros pares e impares;
*/
#include <iostream>
using std::cin; using std::cout; using std::endl;
//////////////////////////////////////////////////////////
int main(){
    int array[100], length,*dir_array;
    dir_array=array;

    cout<<"Elementos del vector: "; cin>>length;
    for(int i=0;i<length;i++){
        cout<<"array["<<i<<"]: "; cin>>array[i];
    }

    for(int i=0;i<length;i++){
        if(*dir_array%2==0){
            cout<<*dir_array<<": "<<dir_array<<endl;
        }
        dir_array++;
    }
    

}
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////