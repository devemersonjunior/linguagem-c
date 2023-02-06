#include <stdio.h>
#include <string.h>
#include <locale.h>


#define TAM 3
	struct t_pessoa{
		int idade;
		float peso;
		char nome[50];	
	};
	
	typedef struct t_pessoa tp;
	
int main(){
	setlocale(LC_ALL,"Portuguese ");
	
	tp lista[TAM];
	int i;
	
	for(i=0;i<TAM;i++){
		printf("Digite os dados da pessoa %d \n", i+1);
		
		puts("\n digite o nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		puts("\n digite a idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("\n digite o peso: ");
		scanf("%.2f", &lista[i].peso);
		fflush(stdin);
	}
	system ("cls");
	for(i=0;i<TAM;i++){
		
		printf("--------------Resultado--------------- \n");
		
		printf("\tnome: %s \n", lista[i].nome);
		printf("\tidade: %d \n", lista[i].idade);
		printf("\t peso: %.2f \n", lista[i].peso);		
	}
	printf("--------------Fim--------------- \n");
}

	//criando e inicializando
	
	//ip pes = {0,0.0,"teste"};
	
	//printf("Inicio: \n");
	//printf("pes.idade: %d \n", pes.idade);
	//printf("pes.peso: %.2f \n", pes.peso);
	//printf("pes.nome: %s \n", pes.nome);
	
	//atribuindo valores aos campos
	
	//pes.idade = 10;
	//pes.peso= 99.99;
	//strcpy(pes.nome, "texto");
	
	//printf("\n Alterando os campos via codigo: \n");
	//printf("pes.idade: %d \n", pes.idade);
	//printf("pes.peso: %.2f \n", pes.peso);
	//printf("pes.nome: %s \n", pes.nome);
	
	//Solicitando inserções via teclado
	
	//printf("\n insira um numero inteiro: \n");
	//scanf("%d", &pes.idade);
	//fflush(stdin);
	//printf("\n insira um numero real: \n");
	//scanf("%.2f", &pes.peso);
	//fflush(stdin);
	//printf("\n insira uma palavra: \n");
	//scanf("%s", &pes.nome);
	//fflush(stdin);
	
	//printf("valores insreidos por voce: \n");
	//printf("pes.idade: %d \n", pes.idade);
	//printf("pes.peso: %.2f \n", pes.peso);
	//printf("pes.nome: %s \n", pes.nome);
	
