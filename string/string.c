#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char senha1[N];
	char senha2[N];
	int acesso;
	
	printf("Digite sua senha: \n");
	gets(senha1);
	
	printf("Confirme sua senha: \n");
	gets(senha2);
	
	acesso = strcmp(senha1,senha2);
	
	if (acesso == 0){
		printf("ACESSADO COM SUCESSO");
	} else {
		printf("SENHA INCOMPATIVEL");
		
		
	}
	
	
		
	
	
} 
	//char s[N];
	//char i;
	
	//printf("Digite um texto: \n");
	//gets(s);
	//i = strlen(s);
	//printf("\n tamanho do texto : %d \n\n", i);
	
	//printf("Impressão de posição: \n");
	//for(i=0;i<strlen(s);i++){
	//	printf("%c",s[i]);
	//}

//---------------------------------------------------------------------
	//char s1[N] = {"logica de "};
	//char s2[N] = {"programação"};
	
	//printf("Antes do STRCAT: \n");
	//printf("str1: %s \n", s1);
	//printf("str2: %s \n", s2);
	
	//strcat(s1,s2);
	
	//printf("Depois do STRCAT: \n");
	//puts(s1);
//---------------------------------------------------------------------	
	//char origem[N] = {"Olá, Mundo!"};
	//char destino[N];
	
	//printf("Antes do STRCPY: \n");
	//puts(origem);
	//puts(destino);
	
	//strcpy(destino,origem);
	
	//printf("Depois do STRCPY: \n");
	//puts(origem);
	//puts(destino);
	//char s[10];
//---------------------------------------------------------------------	
	//printf("Digite algo(LEITURA PELO GETS): \n");
	//gets(s);
	//fflush(stdin);
	
	//puts("Resultado");
	//puts(s);
	//puts("");
	
	//printf("Digite algo(LEITURA PELO FGETS): \n");
	//fgets(s,10,stdin);
	//fflush(stdin);
	
	//puts("Resultado");
	//puts(s);
	//puts("");

//---------------------------------------------------------------------

	//char s[10];
	
	//printf("FUNCIONANDO DA FORMA SCANF CONVENCIONAL \n");
	//scanf("%s", s);
	//fflush(stdin);
	
	//printf("RESULTADO: %s \n\n", s);
	
	//printf("FUNCIONANDO DA FORMA SCANF APRIMORADO \n");
	//scanf("%9[^\n]s", s);
	//fflush(stdin);
	
	//printf("RESULTADO: %s \n\n", s);
