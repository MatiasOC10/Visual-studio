#include <stdio.h>

int sumar(int i, int j);
int restar (int i, int j);
int multiplicar (int i, int j);
float dividir (int i, int j);

int main (){

    int a, b, respuesta;
    float respuesta1;

    printf("Ingrese el primer valor: ");
    scanf("%i", &a);

    printf("Ingrese el segundo valor: ");
    scanf("%i", &b);
    
    respuesta = sumar (a, b);
    printf ("La suma es %i\n", respuesta);
    
    respuesta = restar (a, b);
    printf ("La resta es %i\n", respuesta);

    respuesta = multiplicar(a,b);
    printf ("La multiplicacion es %i\n", respuesta);

    respuesta1 = dividir (a,b);
    printf ("La division es %.2f\n", respuesta1);



    return 0;
}

int sumar (int i, int j){
    int resultado;
    resultado = i + j;
    return resultado;
}

int restar (int i, int j){
    int resultado;
    resultado = i - j;
    return resultado;
}

int multiplicar (int i, int j){
    int resultado;
    resultado = i * j;
    return resultado;
}

float dividir (int i, int j){
    float resultado1;
    resultado1 = i/(float)j;
    return resultado1;
}