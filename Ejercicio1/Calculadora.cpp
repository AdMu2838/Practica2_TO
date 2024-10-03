class Calculadora {
public:
    int calcular(int num1, int num2, char operacion) {
        switch (operacion) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num2 != 0 ? num1 / num2 : 0; // Verificar que no haya división por cero
        default:
            return 0;
        }
    }
};
