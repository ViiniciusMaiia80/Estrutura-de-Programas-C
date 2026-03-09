/*Um dos motivos de erro de cálculo era o fato da operação 1/fatorial gerar um numero inteiro. deve-se forçar a conversão*/

#include <stdio.h>

int main(void){
	int numero, fatorial=1;
	float euler=1.0;
	
	printf("Digite o numero do termo para calcular a constante de euler:");
	scanf("%d", &numero);
	if(numero<0){
		printf("Erro: numero negativo");
	}else{
		for(int i=1;i<=numero;i++){
			fatorial*=i;
			euler+=(float)1/fatorial; //mudando o tipo de dado da operação
		}
	}
	printf("Constante de euler = %f", euler);
	return 0;
}