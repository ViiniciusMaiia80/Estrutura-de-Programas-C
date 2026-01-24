#include <stdio.h>

int main(void){
	double km, litros,consumo, litrosTotal=0, kmTotal=0, consumoTotal;

	while(litros!=-1){
		printf("Informe quantos litros abasteceu (-1 para terminar): ");
		scanf("%lf", &litros);
		if(litros==-1){
			break;
		}
		litrosTotal+=litros;

		printf("Informe quantos km dirigiu: ");
		scanf("%lf", &km);
		kmTotal+=km;
		
		consumo = km/litros;

		printf("O consumo atual eh de %lf km/litros\n\n", consumo);
		
	}
	consumoTotal = kmTotal/litrosTotal;
	printf("\nO consumo geral foi de %lf km/litros", consumoTotal);

	return 0;
}
	