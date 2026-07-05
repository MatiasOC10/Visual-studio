#include <stdio.h>
int main (){

    //Variables
    int a, doble, triple;

    //Entrada
    printf ("Ingrese el valor de a\n");
    scanf ("%d", &a);

    //Proceso
    doble = a*2;
    triple = a*3;

    //Salida
    printf ("El valor doble de a es: %d\n", doble);
    printf ("El valor triple de a es: %d\n", triple);

    return 0;

}