#include <stdio.h>

int main() {
	
	float m = 0;
	
	printf("Digite a nota: \n");
	scanf("%f", &m);
	
	if (m >= 7.0){
		printf("Voc� esta aprovado \n");
	} else {
		printf("Voc� esta reprovado \n");
	}
}
