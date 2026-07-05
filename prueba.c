#include <stdio.h>

int main (){

    /*int numero = 8;
    long numeroGrande = 645438768787875635655;
    double decimalGrande = 1278923714798.54
    char caracter = '0';
    int logico = 0;
    char cadena[25]= "Hola Mundo"*/

    float decimal = 8.5;
    char caracter = '0';
    char cadena[25] = "Hola Mundo";

    
    int a = 8;
    int b = 3;

    a += b;
    printf ("El resultado SUMA es %i\n" , a);

    a -= b;
    printf ("El resultado RESTA es %i\n" , a);

    a *= b;
    printf ("El resultado MULTIPLICACIÓN es %i\n", a);

    a /= b;
    printf ("El resultado DIVISION es 1%\n", a);

    a %= b;
    printf("El resultado MOD es %i\n", a);

    a++;
    printf ("El incremento es %i\n", a);

    a--;
    printf ("El decremento es %i\n", a);

    printf ("El valor de a es = %i es y el valor de b es = %i\n", a, b);

    printf ("El valor decimal es = %f\n", decimal);

    printf ("El valor char es = %c\n", caracter);

    printf ("El valor cadena es = %s\n", cadena);


    return 0; 
}