// Concatenacion de Strings con la funcion strcat()


#include <iostream>
#include <string.h>

using std::cin; using std::cout; using std::endl;

int main(){
    char primero[]="Hola, mi nombre es ";
    char segundo[20];
    char copy[20];

    cout<<"Ingrese su nombre por favor: "; 
    cin.getline(segundo,20,'\n');
    strcpy(copy,primero);
    strcat(copy,segundo);

    cout<<copy;
    return 0;
}