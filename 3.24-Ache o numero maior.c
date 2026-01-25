#include <stdio.h>

int main(void){
	
	int maior, numero, i;
	printf("Digite 10 numeros abaixo: \n"); 
	for(i = 1; i <= 10; i++){
		printf("Digite um numero: ");
			scanf("%d", &numero);
		if(numero>maior){
			maior = numero;
		}
	}
	printf("O maior numero eh: %d", maior);
	return 0;
}
