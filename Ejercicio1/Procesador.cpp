#include <iostream>
#include "Calculadora.cpp"
#include "Operacion.cpp"


class Procesador {
    Operacion op;
    Calculadora calc;
    
public:
    void procesarOperacion(const std::string& operacion) {
        std::vector<int> numeros = op.obtenerNumeros(operacion);
        std::vector<char> operadores = op.obtenerOperadores(operacion);
        
        if (numeros.size() > 6) {
            std::cout << "La operación excede el número máximo de 6 números." << std::endl;
            return;
        }

        // Realizar las operaciones en secuencia
        int resultado = numeros[0];
        for (size_t i = 0; i < operadores.size(); ++i) {
            resultado = calc.calcular(resultado, numeros[i + 1], operadores[i]);
        }

        std::cout << "Resultado: " << resultado << std::endl;
    }
};
