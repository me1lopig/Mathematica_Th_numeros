// Calculo de los primeros n numeros de Mersenne

#include <stdio.h>
#include <stdlib.h>
#include "valor.h" // cargamos la libreria que esta en el directorio del archivo

main (void)

{
double calculo;
double valor=-52.36;

calculo=valor_abs(valor);
printf(" el valor absoluto de %.2f es %.2f",valor,calculo);

imprime();

fflush(stdin);
printf(" \n pulsa una tecla para terminar ....");
getchar();
}
