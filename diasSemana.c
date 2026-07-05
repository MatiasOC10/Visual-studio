#include <stdio.h>

int main (){
    //Declaracion Variables
    int dia;
    //Datos de entrada
    printf ("Ingrese el numero de la semana: \n");
    scanf ("%i}", &dia);

    switch (dia){
        case 1:
            printf ("Es Lunes");
            break;
        case 2:
            printf ("Es Martes");
            break;
        case 3:
            printf ("Es Miercoles");
            break;
        case 4:
            printf ("Es Jueves");
            break;
        case 5:
            printf ("Es Viernes");
            break;
        case 6:
            printf ("Es Sabado");
            break;
        case 7:
            printf ("Es Domingo");
            break;
        default: 
            printf ("Numero no permitido");

    }


    return 0;

}