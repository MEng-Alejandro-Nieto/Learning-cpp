/*
Genere un programa que pida al usuario un numero entre 1-10 usando do-while. 
Si el numero se encuentra en ese rango mostrara un mensaje cualquiera, si
no se encuentra sobre ese rango el programa debera volver a pedir al usuario
que digite el numero nuevamente

do{
ejecute una serie de tareas
} while(condicion)

*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num;
    
    do{
        cout<<"Digite un numero entre 1-10: "; cin>>num;
        
    } while(num<1 ||num>10);
    
    cout<<"el numero que digitaste fue "<<num<<endl;
    
    system("pause");
 
 return 0;    
}