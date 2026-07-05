#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("----CALCULADORA DE DISTANCIAS----\n");
    // Ingreso de datos
    printf("Ingrese x1: ");
    scanf("%f", &x1);

    printf("Ingrese y1: ");
    scanf("%f", &y1);

    printf("Ingrese x2: ");
    scanf("%f", &x2);

    printf("Ingrese y2: ");
    scanf("%f", &y2);

    // Calculo de la distancia
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Resultado
    printf("La distancia entre los puntos es: %.2f\n", distancia);

    return 0;
}