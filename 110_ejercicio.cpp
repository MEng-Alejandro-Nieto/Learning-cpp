/*
Realice una funcion recursiva para la serie fibonacci.
nota: la serie fibonacci esta formada por la secuencia de numeros.
0 1 1 2 3 5 8 13 21 34
*/
#include <iostream>
using std::cin; using std::cout; using std::endl;
////////////////////////////////////////////////////////////
int numero{0};
////////////////////////////////////////////////////////////
void pregunta();
int fibonacci(int numero);
////////////////////////////////////////////////////////////
int main(){

    do{
        pregunta();
    }while(numero<0);
    
    for (int i{0};i<numero;i++){
        cout<<fibonacci(i)<<endl;
    }
    return 0;
}
////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Ingrese los numeros de serie fibonacci que desea obtener: "; cin>>numero;
}
int fibonacci(int numero){
    if(numero<2){
        return numero;
    }
    else{
        return fibonacci(numero-1)+fibonacci(numero-2);
    }
}
////////////////////////////////////////////////////////////