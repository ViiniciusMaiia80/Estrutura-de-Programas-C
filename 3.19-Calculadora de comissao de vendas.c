#include <stdio.h>
int main(void){

    float vendas, comissao;

    while(vendas!=-1){
        printf("Informe a venda em reais (-1 para terminar):");
        scanf("%f", &vendas);
        if(vendas==-1)break;

        comissao = 200 + (0.09*vendas);

        printf("O pagamento nesta semana do funcionario eh: R$%.2f\n", comissao);

    }
    return 0;
}