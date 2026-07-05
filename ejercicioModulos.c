#include <stdio.h>

float promedio(float i, float j, float h);
void certamen (float resultado);

int main (){

    float nota1, nota2, nota3, resultado;
    
    do{
        printf("Ingrese su primera nota: ");
        scanf("%f", &nota1);    
    } while (nota1 < 0 || nota1 > 10);

    do{
        printf("Ingrese su segunda nota: ");
        scanf("%f", &nota2);
    } while (nota2 < 0 || nota2 > 10);
    
    do{
        printf("Ingrese su tercera nota: ");
        scanf("%f", &nota3);
    } while (nota3 < 0 || nota3 > 10);
    
    resultado = promedio(nota1, nota2, nota3);
    printf ("Su promedio total es %.2f\n", resultado);
    
    certamen (resultado);

    return 0;
}

float promedio(float i, float j, float h){
    float resultado;
    resultado = (i + j + h)/3;
    return resultado;
}

void certamen (float resultado){
    if (resultado >= 7){
        printf ("Aprobado\n");
    } else {
        printf ("Desaprobado\n");
    }
}


