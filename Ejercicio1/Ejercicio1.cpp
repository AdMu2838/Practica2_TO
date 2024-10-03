#include "Procesador.cpp"

int main() {
    Procesador procesador;
    std::string operacion;
    
    std::cout << "Ingrese la operacion (ej. 10+37-5): ";
    std::cin >> operacion;

    procesador.procesarOperacion(operacion);
    
    return 0;
}
