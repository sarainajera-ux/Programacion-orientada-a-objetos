#include <iostream>
#include "pizzeria.h"
using namespace std;

PedidoPizza::PedidoPizza() {
    tamanio = "";
    noIngredientes = 0;
    descripcion = "";
    precioBase = 0.0;
}

PedidoPizza::PedidoPizza(string t, int i, string d) {
    tamanio = t;
    noIngredientes = i;
    descripcion = d;

    if (t == "chica") precioBase = 80.00;
    else if (t == "mediana") precioBase = 100.00;
    else if (t == "grande") precioBase = 120.00;
    else precioBase = 0.0;
}

string PedidoPizza::getTamanio() { return tamanio; }
void PedidoPizza::setTamanio(string t) {
    tamanio = t;
    if (t == "chica") precioBase = 80.00;
    else if (t == "mediana") precioBase = 100.00;
    else if (t == "grande") precioBase = 120.00;
    else precioBase = 0.0;
}

int PedidoPizza::getIngredientes() { return noIngredientes; }
void PedidoPizza::setIngredientes(int i) { noIngredientes = i; }

string PedidoPizza::getDescripcion() { return descripcion; }
void PedidoPizza::setDescripcion(string d) { descripcion = d; }

double PedidoPizza::getPrecioBase() { return precioBase; }

double PedidoPizza::calcularTotal() {
    return precioBase + (noIngredientes * 15);
}

void PedidoPizza::generarResumenPedido() {
    cout << "-------- TICKET PIZZERIA ----------" << endl;
    cout << "Pizza: " << getTamanio() << endl;
    cout << "Ingredientes extra: " << getIngredientes() << endl;
    cout << "Descripcion: " << getDescripcion() << endl;
    cout << "Precio base: $" << getPrecioBase() << endl;
    cout << "Total a pagar: $" << calcularTotal() << endl;
    cout << "-------- GRACIAS POR SU COMPRA ----------" << endl;
}
