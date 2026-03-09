/*Dica chave: atentar para a conversão de tipos de dados*/
#include <stdio.h>


int main(void){
	int numero, fatorial=1;
	float euler=1;
	
	printf("Digite o numero de termos para calcular a constante de euler:");
	scanf("%d", &numero);

	for(int i = 1; i<=numero;i++){
		fatorial*= i;
		printf("Fatorial de %d = %d\n", i,fatorial);
		euler += (float)1/fatorial; //a divisao entre inteiros: 1 e fatorial gera um inteiro, portanto é necessário mudar o tipo para float;
	
	}
	printf("constante de euler = %f", euler);
	


	return 0;
}
