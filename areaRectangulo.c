#include <stdio.h>

int main() {
    float litros, precioPorGalon;
    float galones, totalACobrar;

    // Entrada
    printf("Ingrese la produccion del dia (en litros): ");
    scanf("%f", &litros);

    printf("Ingrese el precio por galon ($): ");
    scanf("%f", &precioPorGalon);

    // Proceso
    galones = litros / 3.785;
    totalACobrar = galones * precioPorGalon;

    // Salida
    printf("\n--- Resultados ---\n");
    printf("Equivalente en galones: %.2f\n", galones);
    printf("Total a cobrar: $ %.2f\n", totalACobrar);

    return 0;
}

