#include <stdio.h>
#include <stdlib.h>

int main(){
    // Variables
    char nombresCompletos[50];
    
    char *nombreCarrera = malloc(50 * sizeof(char));

    // Datos de entrada
    printf ("Ingrese sus nombres completos: \n");
    scanf("%[^\n]", nombresCompletos);
    getchar();

    printf ("Ingrese su carrera: \n");
    scanf("%[^\n]", nombreCarrera);
    getchar();
    
    // Datos de salida
    printf ("Sus nombres son: %s\n", nombresCompletos);
    printf ("Su carrera es: %s", nombreCarrera);

    return 0;
    
}  