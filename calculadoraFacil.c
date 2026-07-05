#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    // Datos de entrada
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    getchar ();

    printf("Ingrese el operador aritmetico (+, -, *, /): ");
    scanf(" %c", &operador);
    getchar ();

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    getchar ();

    // Proceso
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("El resultado del producto es: %.2f\n", resultado);
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("El resultado de la division es: %.2f\n", resultado);
            } else {
                printf("Error: no se puede dividir entre cero.\n");
            }
            break;

        default:
            printf("Operador no valido.\n");
            break;
    }

    return 0;
}