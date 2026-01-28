#include <stdio.h>

int main(void){
	int tamanho;
	do{
		printf("Informe o tamanho para o quadrado: ");
			scanf("%d",&tamanho);

		if(tamanho>20||tamanho<1)printf("Valor invalido. Tente novamente!\n");
	}while(tamanho>20||tamanho<1);

	for(int i=1;i<=tamanho;i++){
		if(i==1||i==tamanho){
			for(int j=0;j<tamanho;j++){
				printf("*");
			}
		}else{
			printf("*");
			for(int j=0;j<tamanho-2;j++){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}

	return 0;
}