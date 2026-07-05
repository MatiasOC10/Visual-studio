#include <stdio.h>

int main() {
    float salario, bonificacion, salarioF;
    int years;

    printf("Ingrese su salario en la empresa: \n");
    scanf("%f", &salario);

    printf("Ingrese el tiempo que lleva en la empresa en years: \n");
    scanf("%d", &years);

    if (years < 5) {
        bonificacion = salario * 0.05;
    } else if (years >= 5 && years < 10) {
        bonificacion = salario * 0.10;
    } else if (years >= 10 && years < 15) {
        bonificacion = salario * 0.15;
    } else if (years >= 15 && years < 20) {
        bonificacion = salario * 0.20;
    } else if (years >= 20 && years < 25) {
        bonificacion = salario * 0.25;
    } else if (years >= 25 && years < 30) {
        bonificacion = salario * 0.35;
    } else {
        bonificacion = salario * 0.50;
    }

    salarioF = salario + bonificacion;

    printf("\nSueldo original: %.2f", salario);
    printf("\nBonificacion: %.2f", bonificacion);
    printf("\nSueldo + bonificacion: %.2f", salarioF);

    return 0;
}