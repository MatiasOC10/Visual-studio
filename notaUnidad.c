#include <stdio.h>

int main() {

    // Declaracion de variables
    int nEstudiantes, iniciador;
    float notaACD, notaAA, notaAPE, notaES;
    float pACD, pAA, pAPE, pES, notaUnidad;

    // Datos de entrada
    do {
        printf("------------------------------------\n");
        printf("Ingrese el numero de estudiantes: ");
        scanf("%i", &nEstudiantes);
        if (nEstudiantes <= 0){
        printf ("------------------------------------\n");       
        printf ("Ingrese un numero mayor que 0\n");
        }
    } while (nEstudiantes <= 0);

    for (iniciador = 1; iniciador <= nEstudiantes; iniciador++) {

        printf("\n====================================\n");
        printf("Estudiante #%i\n", iniciador);
        printf("====================================\n");

        do {
            printf("Ingrese la nota de ACD sobre 10: ");
            scanf("%f", &notaACD);
            if (notaACD < 0 || notaACD > 10){
            printf ("Ingrese un numero valido\n");
            }
        } while (notaACD < 0 || notaACD > 10);

        do {
            printf("Ingrese la nota de AA sobre 10: ");
            scanf("%f", &notaAA);
            if (notaAA < 0 || notaAA > 10){
            printf ("Ingrese un numero valido\n");
            }
        } while (notaAA < 0 || notaAA > 10);

        do {
            printf("Ingrese la nota de APE sobre 10: ");
            scanf("%f", &notaAPE);
            if (notaAPE < 0 || notaAPE > 10){
            printf ("Ingrese un numero valido\n");
            }
        } while (notaAPE < 0 || notaAPE > 10);

        do {
            printf("Ingrese la nota de ES sobre 10: ");
            scanf("%f", &notaES);
            if (notaES < 0 || notaES > 10){
            printf ("Ingrese un numero valido\n");
            }
        } while (notaES < 0 || notaES > 10);

        // Proceso
        pACD = notaACD * 0.20;
        pAA = notaAA * 0.20;
        pAPE = notaAPE * 0.25;
        pES = notaES * 0.35;

        notaUnidad = pACD + pAA + pAPE + pES;

        // Salida
        printf("====================================\n");
        printf("El ponderado de ACD es: %.2f\n", pACD);
        printf("El ponderado de AA es: %.2f\n", pAA);
        printf("El ponderado de APE es: %.2f\n", pAPE);
        printf("El ponderado de ES es: %.2f\n", pES);
        printf("====================================\n");
        printf("La nota final es: %.2f\n", notaUnidad);

        if (notaUnidad >= 9) {
            printf("Su desempenio es Excelente\n");
        } else if (notaUnidad >= 7) {
            printf("Su desempenio es Bueno\n");
        } else if (notaUnidad >= 5) {
            printf("Su desempenio es Regular\n");
        } else {
            printf("Su desempenio es Deficiente\n");
        }
    }

    printf("\n------------------------------------\n");
    printf("Proceso finalizado.\n");

    return 0;
}