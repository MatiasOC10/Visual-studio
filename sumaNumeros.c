#include <stdio.h>

    int main () {
        int contador = 1, acumulador = 0;
        while (contador <= 5){
            printf ("El contador es: %i\n", contador);
            acumulador = acumulador + contador;
            contador = contador + 1;
            printf ("El acumulador es: %i\n", acumulador);
        }


    return 0;

}
