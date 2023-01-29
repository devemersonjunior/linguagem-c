#include <stdio.h>

int main(){
	
	int v[5];
	int i;
	
	
	while(i < 5){
		printf("digite um valor: \n");
		scanf("%d", &v[i]);
		i++;
	}
	printf("Dados inseridos: \n");
	for(i=0;i<5;i++){
		printf("%d \n", v[i]);
	}
}
	
	
	
	
	
	
	
	
//	int v[5]={10,20,30,40,50};
//	int i;
//	float s = 0;
	
//	while (i < 5){
		
		
//		s += v[i];
//		i++;
//	}
//	printf("resultado: %f \n", s/5);


