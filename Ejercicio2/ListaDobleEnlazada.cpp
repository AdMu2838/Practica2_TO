#include "Nodo.cpp"
class ListaDobleEnlazada {
private:
    Nodo* cabeza;  
    Nodo* cola;   

public:
    // Constructor
    ListaDobleEnlazada() : cabeza(nullptr), cola(nullptr) {}


    void insertarAlInicio(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        if (cabeza == nullptr) {  
            cabeza = cola = nuevoNodo;
        } else {
            nuevoNodo->next = cabeza;
            cabeza->prev = nuevoNodo;
            cabeza = nuevoNodo;
        }
    }

    // Insertar al final de la lista
    void insertarAlFinal(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        if (cola == nullptr) {  
            cabeza = cola = nuevoNodo;
        } else {
            nuevoNodo->prev = cola;
            cola->next = nuevoNodo;
            cola = nuevoNodo;
        }
    }

    void eliminarNodo(int valor) {
        Nodo* actual = cabeza;

        while (actual != nullptr) {
            if (actual->dato == valor) {
                if (actual->prev != nullptr) {
                    actual->prev->next = actual->next;
                } else {
                    cabeza = actual->next;  
                }

                if (actual->next != nullptr) {
                    actual->next->prev = actual->prev;
                } else {
                    cola = actual->prev; 
                }

                delete actual; 
                return;
            }
            actual = actual->next;
        }
        std::cout << "Nodo con valor " << valor << " no encontrado." << std::endl;
    }

    void mostrarAdelante() {
        Nodo* actual = cabeza;
        std::cout << "Lista hacia adelante: ";
        while (actual != nullptr) {
            std::cout << actual->dato << " ";
            actual = actual->next;
        }
        std::cout << std::endl;
    }

    void mostrarAtras() {
        Nodo* actual = cola;
        std::cout << "Lista hacia atras: ";
        while (actual != nullptr) {
            std::cout << actual->dato << " ";
            actual = actual->prev;
        }
        std::cout << std::endl;
    }

    ~ListaDobleEnlazada() {
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            Nodo* siguiente = actual->next;
            delete actual;
            actual = siguiente;
        }
    }
};
