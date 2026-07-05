#include <stdio.h>

int main() {
    float C1, C2, NL, C3;

    // Entrada de datos
    printf("Ingrese la nota del primer certamen C1: ");
    scanf("%f", &C1);

    printf("Ingrese la nota del segundo certamen C2: ");
    scanf("%f", &C2);

    printf("Ingrese la nota de laboratorio NL: ");
    scanf("%f", &NL);

    // Calcular la nota necesaria en el tercer certamen
    C3 = ((60 - (NL * 0.3)) * 3 / 0.7) - C1 - C2;

    // Mostrar resultado
    // Coloco el if para que verifique si C3 es menor que 0, entonces el estudiante ya aprueba con las notas actuales
    if (C3 < 0) {
        printf("\nEl estudiante ya aprueba con las notas actuales.\n");
        printf("La nota calculada en C3 es: %.2f\n", C3);
        
    // Coloco el else para que verifique si no se cumple lo anterior, entonces el estudiante todavía necesita una nota en C3
    } else {
        printf("\nLa nota minima necesaria en C3 es: %.2f\n", C3);
    }

    return 0;
}

