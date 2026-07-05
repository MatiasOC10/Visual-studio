#include <stdio.h>

int main() {
    int nEstudiantes, iniciador;
    float notaACD, notaAA, notaAPE, notaES;
    float pACD, pAA, pAPE, pES, notaUnidad;

    do {
        printf("Ingrese el numero de estudiantes: ");
        scanf("%i", &nEstudiantes);

        if (nEstudiantes <= 0) {
            printf("Ingrese un numero mayor que 0\n");
        }
    } while (nEstudiantes <= 0);

    for (iniciador = 1; iniciador <= nEstudiantes; iniciador++) {
        printf("\nEstudiante #%i\n", iniciador);

        do {
            printf("Ingrese nota ACD: ");
            scanf("%f", &notaACD);

            if (notaACD < 0 || notaACD > 10) {
                printf("Nota invalida. Ingrese de nuevo\n");
            }
        } while (notaACD < 0 || notaACD > 10);

        do {
            printf("Ingrese nota AA: ");
            scanf("%f", &notaAA);

            if (notaAA < 0 || notaAA > 10) {
                printf("Nota invalida. Ingrese de nuevo\n");
            }
        } while (notaAA < 0 || notaAA > 10);

        do {
            printf("Ingrese nota APE: ");
            scanf("%f", &notaAPE);

            if (notaAPE < 0 || notaAPE > 10) {
                printf("Nota invalida. Ingrese de nuevo\n");
            }
        } while (notaAPE < 0 || notaAPE > 10);

        do {
            printf("Ingrese nota ES: ");
            scanf("%f", &notaES);

            if (notaES < 0 || notaES > 10) {
                printf("Nota invalida. Ingrese de nuevo\n");
            }
        } while (notaES < 0 || notaES > 10);

        pACD = notaACD * 0.20;
        pAA = notaAA * 0.20;
        pAPE = notaAPE * 0.25;
        pES = notaES * 0.35;

        notaUnidad = pACD + pAA + pAPE + pES;

        printf("\nPonderados:\n");
        printf("pACD: %.2f\n", pACD);
        printf("pAA: %.2f\n", pAA);
        printf("pAPE: %.2f\n", pAPE);
        printf("pES: %.2f\n", pES);
        printf("Nota final: %.2f\n", notaUnidad);

        if (notaUnidad >= 9) {
            printf("Su desempeno es Excelente\n");
        } else if (notaUnidad >= 7) {
            printf("Su desempeno es Bueno\n");
        } else if (notaUnidad >= 5) {
            printf("Su desempeno es Regular\n");
        } else {
            printf("Su desempeno es Deficiente\n");
        }
    }

    printf("\nProceso finalizado\n");

    return 0;
}