#include <stdio.h>

int main(void){

    int y = 10;
    int x = 10;

    printf("Valor de Y: %d\n",y);
    printf("Valor de Y com pre-decremento: %d\n", --y);
    printf("Valor de Y atual: %d\n", y);

    printf("\nValor de X: %d\n", x);
    printf("Valor de X com pos-decremento: %d\n", x--);
    printf("Valor de X atual: %d\n", x);

    return 0;
}
