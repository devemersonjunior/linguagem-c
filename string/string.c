#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
	setLocale(LC_ALL,"portuguese");
	
	char origem[N]={"Ola, mundo!"};
	char destino[N];
	
	print("ASntes de strcpy: \n");
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem);
	
	printf("depois de strcpy: \n");
	puts(origem);
	puts(destino);
	
	
	
	
//	char s[10];
	
//	printf("Digite qualquer coisa por favor: \n");
//	gets(s);
//	fflush(stdin);
	
//	puts("resultado:");
//	puts(s);
//	puts("");
	
//	printf("Digite qualquer coisa de novo \n");
//	fgets(s,10,stdin);
//	fflush(stdin);
	
//	puts("resultados:");
//	puts(s);
	
}
