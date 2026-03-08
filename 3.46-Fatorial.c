#include <stdio.h>

int main(void){
	int numero, fatorial=1;
	printf("Digite um inteiro nao negativo:");
	scanf("%d", &numero);

	if(numero<0){
		printf("Erro: execute o programa novamente");
	}else{
		for(int i=1;i<=numero;i++){
			fatorial*=i;
		}
	}

	printf("Fatorial de %d = %d",numero, fatorial);
	return 0;
}