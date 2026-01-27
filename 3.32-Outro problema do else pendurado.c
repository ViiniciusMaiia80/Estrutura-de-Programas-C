#include <stdio.h>

int main(void){
	int x=5,y=8;

	printf("Saida da letra A:\n");
	if(y==8){
	if(x==5)
	printf("@@@@@\n");
	else
	printf("#####\n");
	printf("$$$$$\n");
	printf("&&&&&\n");
	}

	printf("Saida da letra B:\n");	
	if(y==8){
	if(x==5){
	printf("@@@@@\n");
	}else{
	printf("#####\n");
	printf("$$$$$\n");
	printf("&&&&&\n");
	}
	
	printf("Saida da letra C:\n");
	if(y==8){
	if(x==5)
	printf("@@@@@\n");
	}else{
	printf("#####\n");
	printf("$$$$$\n");
	}
	printf("&&&&&\n");
	}

	printf("Saida da letra D:\n");

	y=7;
	if(y==8){
	if(x==5)
	printf("@@@@@\n");
	}else{
	printf("#####\n");
	printf("$$$$$\n");
	printf("&&&&&\n");
	}
	
	return 0;
}