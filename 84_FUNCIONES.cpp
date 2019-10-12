/*
Que es una funcion? 
RTA: Una funcion realiza una tarea concreta y puede ser disenada, 
implementada y depurada de manera independiente al resto del codigo

tipo nombre(tipo var1, tipo var2,...., tipo varn){

    conjunto de instrucciones
    return variable_del_tipo_de_funcion
}

tipo= char, int, float, double, void;

*/
#include <iostream>
using std::cin; using std::cout; using std::endl;

//Prototipo de Funcion
int encontrarmax(int x, int y);


int main(){
    int n1, n2;
    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;

    cout<<"El mayor es: "<<encontrarmax(n1,n2);
    return 0;
}

//Definicion de funcion
int encontrarmax(int x, int y){
    int nummax;

    if(x>y || x==y){
        return x;
    }
    else{
        return y;
    }

}











