#include <stdio.h>

void sumar(int i, int j){
    int resultado;
    resultado = i + j;
    printf("La suma es: %i", resultado);
}

int main (){

    int a, b;

    printf("Ingrese el primer valor: ");
    scanf("%i", &a);

    printf("Ingrese el segundo valor: ");
    scanf("%i", &b);

    sumar(a, b);

    return 0;

}

