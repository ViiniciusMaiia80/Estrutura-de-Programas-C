#include <stdio.h>
#include <float.h>
#include <math.h>

int main(void){
	float a,b,c, cateto1, cateto2, hipotenusa;
	//1- INFORMANDO VALORES MAIORES QUE ZERO PARA OS LADOS COM O TIPO FLOAT

	do{
		printf("Digite os valores para os lados do triangulo retangulo (A,B e C): ");
			scanf("%f%f%f", &a,&b,&c);
			if(a<FLT_EPSILON){
				printf("Valor do lado A invalido. Tente novamente com um valor maior que zero.\n");
			}else if(b<FLT_EPSILON){
				printf("Valor do lado B invalido. Tente novamente com um valor maior que zero.\n");
			}else if(c<FLT_EPSILON){
				printf("Valor do lado C invalido. Tente novamente com um valor maior que zero.\n");
			}
	}while(a<FLT_EPSILON || b<FLT_EPSILON || c<FLT_EPSILON);

	//2-Validando triangulo

	if(a<fabsf(b+c)+FLT_EPSILON &&
	   b<fabsf(a+c)+FLT_EPSILON &&
	   c<fabsf(a+b)+FLT_EPSILON){
		printf("Os valores para o triangulo sao validos.\n");

		//3-Determinar catetos e hipotenusas

		if(a>b-FLT_EPSILON && a>c-FLT_EPSILON){
			hipotenusa = a;
			cateto1 = b;
			cateto2 = c;
		}else if(b>a-FLT_EPSILON && b>c-FLT_EPSILON){
			hipotenusa=b;
			cateto1=a;
			cateto2=c;
		}else if(c>a-FLT_EPSILON && c>b-FLT_EPSILON){
			hipotenusa = c;
			cateto1 = a;
			cateto2 = b;
		}
		float somaDosQuadradosCatetos = pow(cateto1,2)+pow(cateto2,2);
		float quadradoHipotenusa = pow(hipotenusa,2);

		if(fabsf(somaDosQuadradosCatetos-quadradoHipotenusa)<FLT_EPSILON){
			printf("O triangulo eh retangulo!!!!!!");
		}else{
			printf("O triangulo nao eh retangulo.");
		}

	   }else{
		printf("Valores invalidos para o triangulo.\n");
	   }

	return 0;
}