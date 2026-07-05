#include <stdio.h>

void mostrarTituloUnidad(int unidad);
float calcularPromedioActividades(const char nombre[], float ponderacion);
float calcularES(void);
float calcularPromedioUnidad(int unidad);
float calcularPromedioGeneral(int cantidadUnidades);
void determinarEstado(float promedioGeneral);

int main() {
    const int NUMEROUNIDAD = 3;

    float promedioGeneral;

    promedioGeneral = calcularPromedioGeneral(NUMEROUNIDAD);

    printf("\n====================================\n");
    printf("Promedio general de las 3 unidades: %.2f\n", promedioGeneral);

    determinarEstado(promedioGeneral);

    return 0;
}

void mostrarTituloUnidad(int unidad) {
    printf("\n========== Unidad %d ==========\n", unidad);
}

float calcularPromedioActividades(const char nombre[], float ponderacion) {
    float promedio = 0;
    float nota;
    int numero;
    int i;

    do {
        printf("Ingrese el numero de actividades en %s: ", nombre);
        scanf("%d", &numero);
    } while (numero < 1);

    for (i = 1; i <= numero; i++) {
        do {
            printf("Ingrese la nota de %s %d: ", nombre, i);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        promedio += nota;
    }

    promedio = promedio / numero;
    promedio = promedio * ponderacion;

    return promedio;
}

float calcularES(void) {
    float promedioES;
    float notaABP, notaPD;
    float pABP, pPD;

    do {
        printf("Ingrese la nota del Aprendizaje Basado en Problemas: ");
        scanf("%f", &notaABP);
    } while (notaABP < 0 || notaABP > 10);

    do {
        printf("Ingrese la nota del Portafolio Digital: ");
        scanf("%f", &notaPD);
    } while (notaPD < 0 || notaPD > 10);

    do {
        printf("Ingrese el ponderado del Aprendizaje Basado en Problemas: ");
        scanf("%f", &pABP);

        printf("Ingrese el ponderado del Portafolio Digital: ");
        scanf("%f", &pPD);

        if (pABP < 0 || pPD < 0 || pABP > 10 || pPD > 10 ||
            pABP + pPD != 10) {
            printf("Error: los ponderados deben estar entre 0 y 10, y deben sumar 10.\n");
        }

    } while (pABP < 0 || pPD < 0 || pABP > 10 || pPD > 10 ||
             pABP + pPD != 10);

    pABP = pABP / 10;
    pPD = pPD / 10;

    promedioES = (notaABP * pABP) + (notaPD * pPD);
    promedioES = promedioES * 0.35;

    return promedioES;
}

float calcularPromedioUnidad(int unidad) {
    float promedioACD;
    float promedioAPE;
    float promedioAA;
    float promedioES;
    float promedioFinal;

    mostrarTituloUnidad(unidad);

    promedioACD = calcularPromedioActividades("ACD", 0.20);
    promedioAPE = calcularPromedioActividades("APE", 0.25);
    promedioAA = calcularPromedioActividades("AA", 0.20);
    promedioES = calcularES();

    promedioFinal = promedioACD + promedioAPE + promedioAA + promedioES;

    printf("\nPromedio ACD de la unidad %d: %.2f\n", unidad, promedioACD);
    printf("Promedio APE de la unidad %d: %.2f\n", unidad, promedioAPE);
    printf("Promedio AA de la unidad %d: %.2f\n", unidad, promedioAA);
    printf("Promedio ES de la unidad %d: %.2f\n", unidad, promedioES);
    printf("Promedio Final de la Unidad %d: %.2f\n", unidad, promedioFinal);

    return promedioFinal;
}

float calcularPromedioGeneral(int cantidadUnidades) {
    float sumaPromedios = 0;
    float promedioGeneral;
    int unidad;

    for (unidad = 1; unidad <= cantidadUnidades; unidad++) {
        sumaPromedios += calcularPromedioUnidad(unidad);
    }

    promedioGeneral = sumaPromedios / cantidadUnidades;

    return promedioGeneral;
}

void determinarEstado(float promedioGeneral) {
    if (promedioGeneral >= 7) {
        printf("Estado final: Aprobado\n");
    } else {
        printf("Estado final: Desaprobado\n");
    }
}