/*SARAI RODRIGUEZ NAJERA 
ING EN TECNOLOGIAS DE LA INFO
00616609*/
#include <iostream>
#include "pizzeria.h"
using namespace std;

int main() {
    PedidoPizza objeto1;
    
    objeto1.setTamanio("grande");
    objeto1.setDescripcion("masa tradicional");
    objeto1.setIngredientes(2);
    objeto1.generarResumenPedido();
    
    cout << endl << endl;
    
    PedidoPizza objeto2("chica", 0 , "vegana");
    objeto2.generarResumenPedido();
    
    cout << endl;
    
    return 0;
}
