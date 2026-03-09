#include <stdio.h>
#include <math.h>

int main(void){
	int x, termos;
	double fatorial=1; 
	double e=1;
	
	printf("Digite um valor para X:");
	scanf("%d", &x);
	printf("Digite a quantidade de termos para o calculo:");
	scanf("%d", &termos);
	if(termos<0){
		printf("Erro: valor invalido: negativo. Execute novamente o programa");
	}else{
		for(int i = 1; i<=termos;i++){
			fatorial*=i;
			e+=pow(x,i)/fatorial;
		}
	}

	printf("O valor de e elevado a %d eh igual a=%f",x,e);
	return 0;

}