#include <stdio.h>

int main(){
	
	int n1, n2,n3;
	
	printf("digite o 1 valor: \n");
	scanf("%d", &n1);
	
	printf("digite o 2 valor: \n");
	scanf("%d", &n2);
	
	printf("digite o 3 valor: \n");
	scanf("%d", &n3);
	
	printf("Condição '&&'\n");
	
	// pode usar &&, || e !=.
	if(n1 >= n2 && n1 >=n3){
		printf("%d e maior que %d, %d \n",n1, n2,n3);
	}
	else{
		printf("o valor %d e menor que os demais", n1);
	}		
}
