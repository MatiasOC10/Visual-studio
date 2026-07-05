#include <stdio.h>

int main() {

    int cantidadProductos, i;
    float precio, total = 0;
    float descuento, totalFinal;

    // Ingreso y validación de la cantidad de productos
    do {
        printf("Ingrese la cantidad de productos vendidos: ");
        scanf("%i", &cantidadProductos);

        if (cantidadProductos <= 0) {
            printf("Ingrese una cantidad mayor que 0\n");
        }

    } while (cantidadProductos <= 0);

    // Ingreso y validación de precios
    for (i = 1; i <= cantidadProductos; i++) {

        do {
            printf("Ingrese el precio del producto #%i: ", i);
            scanf("%f", &precio);

            if (precio <= 0) {
                printf("Ingrese un precio valido\n");
            }

        } while (precio <= 0);

        total = total + precio;
    }

    // Aplicación del descuento
    if (total > 100) {
        descuento = total * 0.10;
    } else {
        descuento = 0;
    }

    // Cálculo del total final
    totalFinal = total - descuento;

    // Resultados
    printf("\nTotal sin descuento: $%.2f\n", total);
    printf("Descuento aplicado: $%.2f\n", descuento);
    printf("Total a pagar: $%.2f\n", totalFinal);

    return 0;
}


