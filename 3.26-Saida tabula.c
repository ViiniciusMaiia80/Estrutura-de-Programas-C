#include <stdio.h>
int main(void){
	printf("A\tA+2\tA+4\tA+6\n");
	int i;
	
	for(i=1;i<=5;i++){
		printf("%d\t%d\t%d\t%d\t\n", i*3, (i*3)+2, (i*3)+4, (i*3)+6);
	}
	
	return 0;
}
