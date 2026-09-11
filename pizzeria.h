#ifndef PIZZERIA_H
#define PIZZERIA_H

#include <string>
using namespace std;

class PedidoPizza {
private:
    string tamanio;
    int noIngredientes;
    string descripcion;
    double precioBase;

public:
    
    PedidoPizza();
    PedidoPizza(string t, int i, string d);

    string getTamanio();
    void setTamanio(string t);

    string getDescripcion();
    void setDescripcion(string d);

    int getIngredientes();
    void setIngredientes(int i);

    double getPrecioBase();

    double calcularTotal();
    void generarResumenPedido();
};

#endif
