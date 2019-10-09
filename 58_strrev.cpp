// revertir una cadena de caracteres con la funcion strrev()


#include <iostream>
#include <string.h>


using std::cin; using std::cout; using std::endl;


int main(){
	
    char palabra[]="animal"; int len;
    char palabra2[]="paraiso";
    len=strlen(palabra);
    char reverso[len]; int i{0}; int j{len-1};

    while(j>=0){
        reverso[i]=palabra[j];
        j--;i++;
    }
    strrev(palabra2);

	cout<<reverso<<endl; cout<<palabra2; 
   	return 0;


}
