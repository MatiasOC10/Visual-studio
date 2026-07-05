#include <stdio.h>

int main(){
    //Variables
    float pies, yardas, pulgadas, centimetros, metros;

    //Datos de entrada
    printf ("Ingrese el valor en pies: ");
    scanf ("%f", &pies);

    //Proceso
    yardas= pies / 3;
    pulgadas= pies * 12;
    centimetros= pies * 30.48;
    metros= pies * 0.3048;

    //Datos de salida
    printf ("yardas: %f\n", yardas);
    printf ("pulgadas: %f\n", pulgadas);
    printf ("centimetros: %f\n", centimetros);
    printf ("metros: %f\n", metros);

    return 0;

}