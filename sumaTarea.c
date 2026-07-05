#include <stdio.h>

int main() {

    int num, suma = 0, i = 1;

    while(i <= 10) {

        printf("Ingrese una cantidad: ");
        scanf("%d", &num);

        suma = suma + num;

        i++;
    }

    printf("La suma total es: %d", suma);

    return 0;
}