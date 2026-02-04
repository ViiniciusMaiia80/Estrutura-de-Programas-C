//Validando lados de um triangulo

#include <stdio.h>
#include <float.h>
#include <math.h>

int main(void){
	float a,b,c;


	do{
		printf("Digite os lados de um triangulo (VALORES MAIORES QUE ZERO):");
			scanf("%f%f%f", &a,&b,&c);
			if(a<FLT_EPSILON){
				printf("\nValor do lado A invalido. Tente novamente\n");
			}else if(b<FLT_EPSILON){
				printf("\nValor do lado B invalido. Tente novamente\n");
			}else if(c<FLT_EPSILON){
				printf("\nValor do lado C invalido. Tente novamente\n");
			}
	}while(a<DBL_EPSILON||b<DBL_EPSILON||c<DBL_EPSILON);

	if( c<fabsf(a+b)-FLT_EPSILON &&
	    b<fabsf(a+c)-FLT_EPSILON &&
	    a<fabsf(b+c)-FLT_EPSILON){
		printf("Os valores para o triangulo sao validos");
	}else{
		printf("Valores invalidos para o triangulo");
	}
	return 0;
}