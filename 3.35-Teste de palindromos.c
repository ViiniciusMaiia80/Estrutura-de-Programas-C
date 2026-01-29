#include <stdio.h>

int main(void){
	int numero,digitos, result, d,d1;

	printf("Digite um inteiro com 5 digitos: ");
		scanf("%d",&numero);
	d=numero/10000;//seleciona o primeiro digito do numero com 5 algarismos
	d1=numero%10;//seleciona o ultimo digito

	if(d==d1){
		result = 1;
	}
	digitos = (numero/10)%1000; //elimina o primeiro e ultimo digito de numero com  5 algarismos

	d=numero/100; //seleciona o primeiro digito do numero com 3 algarismo
	d1=numero%10;//seleciona o ultimo digito do numero com 3 algarismo

	digitos = (numero/10)%10;//Elimina o primeiro e ultimo digito do numero com 3 algarismos.

	
	if(result==1)printf("O numero %d eh um palindromo",numero);
	else printf("O numero %d nao eh um palindromo", numero);
	return 0;
}