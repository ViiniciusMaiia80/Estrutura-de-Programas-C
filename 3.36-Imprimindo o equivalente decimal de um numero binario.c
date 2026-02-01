#include <stdio.h>

int main(void){
    int binario, digito, decimal = 0, valor_posicional=1;

    printf("Digite um numero binario para conversao: ");
        scanf("%d", &binario);
    while(binario>0){
        digito = binario%10;
        if(digito!=0 && digito!=1){
            printf("Valor invalido. Tente novamente\nDigite um numero binario para conversao: ");
                scanf("%d", &binario);
        }else{
            decimal += digito * valor_posicional;
            binario/=10;
            valor_posicional*=2;
        }
    }
    printf("O equivalente decimal do binario acima eh: %d", decimal);
    return 0;
}