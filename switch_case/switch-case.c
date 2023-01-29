#include <stdio.h>

int main(){
	
	int r = 0;
	
	printf("Digite o numero da opção que melhor o servir. \n");
	printf("1 - Morango \n");
	printf("2 - Abacaxi \n");
	printf("3 - Manga \n");
	scanf("%d", &r);
	
	switch (r){
		case (1):
			printf("Seu sorvete sera de morango. \n");
			break;
		
		case (2):
			printf("Seu sorvete sera de Abacaxi. \n");
			break;
		
		case (3):
			printf("Seu sorvete sera de Manga. \n");
			break;
		
	}
}
