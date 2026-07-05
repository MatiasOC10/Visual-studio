#include <stdio.h>

int main(){
    int numero;

    printf ("Ingrese un numero:\n");
    scanf ("%i", &numero);

    if(numero%2!=0) {
        printf("El numero %i impar", numero);
    } else {
    if (numero%2!=1)
        printf ("El numero %i es par", numero);
    }
    return 0;



}
    