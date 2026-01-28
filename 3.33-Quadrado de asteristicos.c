#include <stdio.h>


int main(void){
	
	int tamanho;
	do{
		printf("Digite o tamanho do quadrado de 1 até 20: ");
			scanf("%d", &tamanho);
		if(tamanho>20||tamanho<1){
			printf("Valor invalido. Tente novamente!\n");
		}
	}while(tamanho>20||tamanho<1);

	for(int i=0;i<tamanho;i++){
		for(int j=0;j<tamanho;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}