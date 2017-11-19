// Calculo de los primeros n numeros de Mersenne

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main (void)

{
float mersenne;
for(int n=2;n<=50;n++)
    {
        mersenne=pow(2,n)-1;
        printf(" El numero %d esimo numero de Mersenne es %.1f \n",n,mersenne);
    }
// pausa para evitar terminar el programa sin ver los resultados

printf("\n Mucho ojo comprobar los valores de los numeros grandes\n");


fflush(stdin);
printf(" \n pulsa una tecla para terminar ....");
getchar();
}
