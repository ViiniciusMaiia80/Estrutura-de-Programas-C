#include <stdio.h>

int main(void){
	for(int i=1;i<=8;i++){
		if(i%2==0){
			printf(" ");
		}
		for(int j=1;j<=8;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
