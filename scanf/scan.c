#include <stdio.h>

int main(){
	int idade = 0;
	float peso = 0;
	
	printf("Valor inicial da idade: %d \n", idade);
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite o seu peso: \n");
	scanf("%f", &peso);
	
	printf("A sua idade atual e %d e o seu peso e %f. \n", idade, peso);
}
