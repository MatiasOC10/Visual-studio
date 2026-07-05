#include <stdio.h>

int main() {

    int i=1, resultado;
        while (i<=10){
            int j=1;
            while (j<=12){
                printf ("%d*%d= %d\n", i, j, i*j);
                j++;
            }
            i++;

        }
        return 0;
        
}