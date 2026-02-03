#include <stdio.h>

int main(void){
	int inteiro,digito,contNumber7=0;

	printf("Digite um numero inteiro: ");
		scanf("%d", &inteiro);
	while(inteiro>0){
		digito=inteiro%10;
		inteiro/=10;
		if(digito == 7){
			contNumber7++;
		}
	}
	printf("A quantidade de algarismo 7 no numero eh: %d", contNumber7);
	return 0;
}