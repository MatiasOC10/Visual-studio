#include <stdio.h>

int main (){
    // Declaracion de Variables
    int diaSemana;

    // Datos de Entrada
    printf("Ingrese el numero de la semana: \n");
    scanf("%i", &diaSemana);
    
    if (diaSemana == 1){
        printf("Es Lunes");
    } else if (diaSemana == 2){
        printf("Es Martes");
    } else if (diaSemana == 3){
        printf("Es Miercoles");
    } else if (diaSemana == 4){
        printf("Es Jueves");
    } else if (diaSemana == 5){
        printf("Es Viernes");
    } else if (diaSemana == 6){
        printf("Es Sabado");
    } else if (diaSemana == 7){
        printf("Es Domingo");
    } else {
        printf("Numero no permitido");
    }
    
    return 0;
}