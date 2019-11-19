#include <iostream>
#include "Camila.h"
using namespace std;

int main(){

    Camila* persona = new Camila("Camila","Lopez",25);
    persona->get_nombre();
    persona->get_apellido();
    persona->get_edad();
    return 0;
}
