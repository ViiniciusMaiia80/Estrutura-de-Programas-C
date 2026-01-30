#include <stdio.h>

int main(void){
	int numero, d1,d2,d4,d5, result = 0;

	do{
		printf("Digite um numero de 5 digitos: ");
			scanf("%d", &numero);
		if(numero>=100000||numero<10000){
			printf("Numero invalido. Tente novamente!\n");
			continue;
		}
	}while(numero>=100000||numero<10000);



	d1=numero/10000;
	d2=(numero/1000)%10;
	d4=(numero/10)%10;
	d5=numero%10;

	if(d1==d5||d2==d4){
		result=1;
	}

	if(result==1){
		printf("O numero %d eh um palindromo",numero);
	}else{
		printf("O numero %d nao eh um palindromo",numero);
	}

	
	return 0;
}