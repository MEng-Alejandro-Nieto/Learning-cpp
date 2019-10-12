/*Hacer una estructura llamada corredor, en la cual se tendran los
siguientes campos: nombre, edad, sexo, club, pedir  datos al usuario para un 
corredor, y asignar una categoria de competicion:
- juvenil:      <=18 anos
- senor:        <=40 anos
- veterano:     >40 anos
*/

#include <iostream>
#include <string.h>
using std::cin; using std::cout; using std::endl;

struct corredor{
    char nombre[30];
    int  edad;
    char sexo[30];
    char club[30];
    
}persona;

int main(){
    char categoria[30];

    cout<<"Nombre: ";   cin.getline(persona.nombre,30,'\n');
    cout<<"Edad: ";     cin>>persona.edad;
    fflush(stdin);
    cout<<"Sexo: ";     cin.getline(persona.sexo,30,'\n');
    cout<<"Club: ";     cin.getline(persona.club,30,'\n');
    if(persona.edad<=18){
        strcpy(categoria,"Juvenil");
        }
    else if(persona.edad>18 && persona.edad<=40){
        strcpy(categoria,"Senor");
        }
    else{
        strcpy(categoria,"Veterano");
    }
    cout<<"\nLa persona de nombre "<<persona.nombre<<" De "<<persona.edad<<" anos de edad\nesta en la categoria "<<categoria;
    return 0;
}







