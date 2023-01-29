#include <stdio.h>

int main(){
	int c = 0;
	int r;
	
	printf("ate quanto deseja contar? \n");
	scanf("%d", &r);
	
	while (c <= r){
		printf("%d \n", c);
		c++;
		}
}
