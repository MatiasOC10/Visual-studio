#include <stdio.h>

int main() {
    int n1, n2;

    // Entrada
    printf("Ingrese el numero 1: ");
    scanf("%d", &n1);

    printf("Ingrese el numero 2: ");
    scanf("%d", &n2);

    // Proceso
    if (n1>n2) {
        printf ("El primer numero es mayor");
    }

    if (n2>n1) {
        printf("El segundo numero es mayor");
    }

    if (n2==n1){
        printf("Los numeros son iguales");
    }
    

    return 0;
}

