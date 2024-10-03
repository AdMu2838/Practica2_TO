#include "ListaDobleEnlazada.cpp"
int main() {
    ListaDobleEnlazada lista;

    // Insertar algunos valores
    lista.insertarAlInicio(10);
    lista.insertarAlInicio(5);
    lista.insertarAlFinal(20);
    lista.insertarAlFinal(25);

    // Mostrar la lista hacia adelante y hacia atrás
    lista.mostrarAdelante();  // Salida: 5 10 20 25
    lista.mostrarAtras();     // Salida: 25 20 10 5

    // Eliminar un nodo
    lista.eliminarNodo(10);

    // Mostrar la lista después de eliminar
    lista.mostrarAdelante();  // Salida: 5 20 25
    lista.mostrarAtras();     // Salida: 25 20 5

    return 0;
}
