#include <stdio.h>
#define PI 3.14159

int main(void){
	float raio, diametro, circunferencia;

		printf("Digite o valor do raio de um circulo: ");
			scanf("%f", &raio);
		if(raio<=0){
			printf("Valor invalido! Execute o programa novamente.\n");
		
	}
	diametro = 2*raio;
	circunferencia = 2*PI*raio;

	printf("Raio=%.2fcm\nDiametro=%.2fcm\nCircunferencia=%.2fcm",raio,diametro,circunferencia);
	return 0;
}