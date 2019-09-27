/* 
Cambiar un numero entre (0-3999) entero a numero romano 

M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1

*/ 


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int numero,unidades=0, decenas=0,centenas=0,millar=0;
    
    cout<<"Ingrese un numero entre 0-3999 para transformarlo en numero romano: ";cin>>numero;
    unidades=numero%10; numero=numero/10;
    decenas =numero%10; numero=numero/10;
    centenas=numero%10; numero=numero/10;
    millar=numero%10; numero=numero/10;
    
    // Millar
    switch(millar){
        case 0: break;
        case 1: cout<<"M"; break;
        case 2: cout<<"MM"; break;
        case 3: cout<<"MMM"; break;
        default:
                unidades=0; decenas=0; centenas=0; break;
        }
    // Centenas    
    switch(centenas){
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"XD"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DX"; break;
        case 7: cout<<"DXX"; break;
        case 8: cout<<"DXXX"; break;
        case 9: cout<<"CM"; break;
        }
    // Decenas   
    switch(decenas){
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXXX"; break;
        case 9: cout<<"XC"; break;
        } 
    // Unidades  
    switch(unidades){
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;
        }
    if( (unidades==0) && (decenas==0) && (centenas==0) ){
        cout<<"El numero ingresado es mayor a 3999";
        }
    
    return 0;
}
