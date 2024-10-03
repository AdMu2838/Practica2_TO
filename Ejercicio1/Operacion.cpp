#include <string>
#include <vector>
#include <sstream>

class Operacion {
public:
    // Método para dividir la cadena en números
    std::vector<int> obtenerNumeros(const std::string& operacion) {
        std::vector<int> numeros;
        std::stringstream ss(operacion);
        std::string temp;
        int num;
        // Extraer números de la cadena
        while (ss >> num) {
            numeros.push_back(num);
            if (ss.peek() == '+' || ss.peek() == '-' || ss.peek() == '*' || ss.peek() == '/') {
                ss.ignore();
            }
        }
        return numeros;
    }

    // Método para dividir la cadena en operadores
    std::vector<char> obtenerOperadores(const std::string& operacion) {
        std::vector<char> operadores;
        for (char c : operacion) {
            if (c == '+' || c == '-' || c == '*' || c == '/') {
                operadores.push_back(c);
            }
        }
        return operadores;
    }
};
