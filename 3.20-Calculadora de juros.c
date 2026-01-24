#include <stdio.h>

int main(void){
    float emprestimo, juros, porcentagemJuros;
    int dias;
    while(emprestimo!=-1){
        printf("Informe  o valor do emprestimo (-1 para terminar):");
        scanf("%f", &emprestimo);
        if(emprestimo == -1)break;

        printf("Informe a taxa de juros: ");
        scanf("%f", &porcentagemJuros);

        printf("Informe o prazo de dias para pagamento: ");
        scanf("%d", &dias);

        juros = (emprestimo * porcentagemJuros * dias)/365;
        printf("O valor do juros eh de R$ %.2f\n\n", juros);
    }
    return 0;
}           