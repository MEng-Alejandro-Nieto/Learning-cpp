/*
Mostrar los meses del agno, pidiendole al usuario un numero entre 1-12 y 
mostrar el mes al que corresponde
*/

#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Ingrese un numero entre 1-12: "; cin>>num; cout<<endl;
    
    switch(num){
        
        case 1: cout<<"Enero\n"; break;
        case 2: cout<<"Febrero\n"; break;
        case 3: cout<<"Marzo\n"; break;
        case 4: cout<<"Abril\n"; break;
        case 5: cout<<"Mayo\n"; break;
        case 6: cout<<"Junio\n"; break;
        case 7: cout<<"Julio\n"; break;
        case 8: cout<<"Agosto\n"; break;
        case 9: cout<<"Septiembre\n"; break;
        case 10: cout<<"octubre\n"; break;
        case 11: cout<<"Noviembre\n"; break;
        case 12: cout<<"Diciembre\n"; break;
        default: cout<<"The number entered is not between the range\n";
        
        
        }
}