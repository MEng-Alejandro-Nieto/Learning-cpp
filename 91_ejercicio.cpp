/*
Escriba una plantilla de funcion llamado maximo() que devuelva el valor
maximo de tres argumentos que se transmitan a la funcion cuando sea 
llamada. suponga que los tres argumentos seran del mismo tipo de datos
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

//----------------------------PROTOTIPO DE LA FUNCION----------------------
template <class TIPO>
void maximo(TIPO valor1, TIPO valor2, TIPO valor3);

//----------------------------MAIN FUNCTION--------------------------------

int main(){
    maximo(42,42,42);
    return 0;
}
//----------------------------DEFINICION DE LAS FUNCIONES-----------------
template <class TIPO>
void maximo(TIPO valor1, TIPO valor2, TIPO valor3){
    if(valor1>valor2){
        if(valor1>valor3){
            cout<<valor1<<endl;
        }
        else{
            cout<<valor3<<endl;
        }
    }
    else if(valor2>valor1){
        if(valor2>valor3){
            cout<<valor2<<endl;
        }
        else{
            cout<<valor3<<endl;
        }
    }
    else{
        if(valor3>valor1){
            cout<<valor3<<endl;
        }
        else if(valor1>valor3){
            cout<<valor1<<endl;
        }
        else{
            cout<<"Todos son iguales"<<endl;
        }
    }

}