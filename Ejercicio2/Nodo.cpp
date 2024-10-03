#include <iostream>

// Estructura del Nodo de la lista doblemente enlazada
struct Nodo {
    int dato;
    Nodo* prev;
    Nodo* next;

    // Constructor para inicializar el nodo
    Nodo(int valor) : dato(valor), prev(nullptr), next(nullptr) {}
};
