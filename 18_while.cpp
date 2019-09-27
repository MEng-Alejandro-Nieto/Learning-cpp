/*
Cree un programa que imprima en pantalla los numeros del 1 al 10  en orden ascendente y 
descendente usando while

while(condicion){
    ejecute una serie de tareas
    }
    
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    
    int i=1;
    
    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    i--; cout<<endl;

    while (i>=1){
        cout<<i<<endl;
        i--;
        }
        
    getch();    
}