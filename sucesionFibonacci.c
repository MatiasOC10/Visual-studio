#include <stdio.h>

int main() {
    int n, anta, antb, suma, cont;

    do {
        printf("Ingrese la posicion n: ");
        scanf("%d", &n);
    } while (n < 0);

    if (n == 0) {
        printf("Fibonacci(%d) = 0\n", n);
    } else if (n == 1) {
        printf("Fibonacci(%d) = 1\n", n);
    } else {
        anta = 0;
        antb = 1;

        for (cont = 2; cont <= n; cont++) {
            suma = anta + antb;
            anta = antb;
            antb = suma;
        }

        printf("Fibonacci(%d) = %d\n", n, suma);
    }

    return 0;
}