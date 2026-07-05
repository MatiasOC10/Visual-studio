#include <stdio.h>

int main () {
    //Declaracion de variables
    float nota1, nota2, nota3;
    float notapromedio;

    //Datos de entrada
    printf ("Ingrese la nota 1: \n");
    scanf ("%f", &nota1);

    printf ("Ingrese la nota 2: \n");
    scanf ("%f", &nota2);

    printf ("Ingrese la nota 3: \n");
    scanf ("%f", &nota3);

    //Proceso
    notapromedio = (nota1 + nota2 + nota3)/3;

    //Salida
    
    if (notapromedio>=12){
        printf("Aprobado");

    }


}