#include <stdio.h>
int main (){
    //Declaracion de variables
    float numero;

    //Datos de entrada
    printf ("Ingrese el numero: \n");
    scanf ("%f", &numero);

    //Proceso
    if ((numero>=10) && (numero<=20)) {
        printf ("El numero esta dentro del rango");
    } else {
        printf ("El numero no esta dentro del rango");
    }

    return 0;

}