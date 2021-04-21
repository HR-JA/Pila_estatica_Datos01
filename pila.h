#ifndef PILA_H
#define PILA_H
#include <iostream>
using namespace std;
class pila{
    private: int datos[10],tope;
    public:
    pila();
    void push();
    void pop();
    int  vacia();
    int llena();
    void mostrar_tope();
    void mostrar_pila();
};
#endif