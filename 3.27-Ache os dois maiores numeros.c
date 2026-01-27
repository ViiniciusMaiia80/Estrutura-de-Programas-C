#include <stdio.h>
int main(void){
	int i,maior1,maior2, numero;
	
	printf("Digite 10 numeros a seguir:\n");
	
	for(i=1;i<=10;i++){
		printf("Digite o numero: ");
			scanf("%d",&numero);
		if(numero>maior1){
			maior2=maior1;
			maior1=numero;
		}else if(numero>maior2){
			maior2=numero;
		}
	
	}
	printf("Os dois maiores numeros digitados sao: %d e %d", maior1,maior2);
	return 0;
}
