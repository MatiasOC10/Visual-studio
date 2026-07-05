#include <stdio.h>
int main (){

    //Variables
    int P1;
    int P2;
    int P3;
    int TOTAL;

    //Proceso
    P1=30000 * 0.04;
    P2=29000 * 0.04;
    P3=33000 * 0.04;
    TOTAL= P1 + P2 + P3;

    //Datos de salidad
    printf ("---- REPORTE DE COMISION ---- \n");
    printf ("Se pagara al vendedor 1: %d\n", P1);
    printf ("Se pagara al vendedor 2: %d\n", P2);
    printf("Se pagara al vendedor 3: %d\n", P3);
    printf("En total se pagara: %d\n", TOTAL);

    return 0;

}