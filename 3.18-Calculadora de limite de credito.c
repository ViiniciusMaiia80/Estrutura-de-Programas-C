#include <stdio.h>

int main(void){
	int conta;
	float saldoInicial, totalEncargos, totalCreditos, limiteCredito, novoSaldo;

	while(conta!=-1){
		printf("Informe o numero da conta (-1 para terminar):");
		scanf("%d", &conta);
		if(conta==-1){
			break;
		}

		printf("Informe o saldo inicial: ");
		scanf("%f", &saldoInicial);

		printf("Informe o total de encargos: ");
		scanf("%f", &totalEncargos);

		printf("Informe o total de credito: ");
		scanf("%f", &totalCreditos);

		printf("Informe o limite de credito: ");
		scanf("%f", &limiteCredito);

		novoSaldo = saldoInicial+totalEncargos-totalCreditos;
		if(novoSaldo > limiteCredito){
			printf("Conta: %d\nLimite de credito: %.2f\nSaldo: %.2f\nLimite de credito ultrapassado.", conta,limiteCredito,novoSaldo);
		}

	}
	return 0;
}
