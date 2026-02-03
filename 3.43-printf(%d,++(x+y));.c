
#include <stdio.h>

int main(void){
	int x=1,y=2;
	int soma = x+y;
	printf("%d", ++soma);
	return 0;
}

//para corrigir a instrução do titulo, é necessário atribuir a soma das variáveis x e y numa variavel
//a incrementação da soma de x e y diretamente na impressão é armazenada temporariamente
//já sendo esta soma sendo atribuída a uma variável específica, o valor é armazenado permanentemente