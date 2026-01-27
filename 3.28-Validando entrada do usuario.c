//Codigo referente a figura 3.10 do capitulo 3

#include <stdio.h>
#include <locale.h>

int main(void){
	int aluno=1, aprovados=0, reprovados=0, result;

	
	while(aluno<=10){
		printf("Informe se o aluno %d esta aprovado(1) ou reprovado(2): ", aluno);
			scanf("%d", &result);

		if(result==1)aprovados++;
		else if(result==2)reprovados++;
		else{ // se o numero for diferente de 1 ou 2
			printf("Valor invalido! Digite novamente a situacao do aluno:\n");
			continue;
		}
		aluno++;
	}
	printf("\nAprovados: %d\nReprovados: %d",aprovados,reprovados);

	if(aprovados>=8){
		printf("Professor recebe bonus!!");
	}

	return 0;
}