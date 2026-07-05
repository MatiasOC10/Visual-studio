#include <stdio.h>
int main (){
    float sueldo, sueldoFinal;

    //Datos de entrada
    printf ("Ingrese el sueldo del trabajador: \n");
    scanf ("%f", &sueldo);

    //Salida
    if (sueldo<1000) {
        sueldoFinal=sueldo + (sueldo * 0.45);
        printf ("Su sueldo para el mes actual es: %.2f\n", sueldoFinal);    
    } else {
        sueldoFinal=sueldo - (sueldo * 0.10);
        printf ("Su sueldo para el mes actual es: %.2f\n", sueldoFinal);
    }

    return 0;

}