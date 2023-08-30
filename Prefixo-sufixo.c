#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a palavra --> ");
	char resp[30];
	
	gets(resp);
	int tam = strlen(resp);
	prefixo(resp, tam);
	sufixo(resp, tam);

}

void prefixo(char *resp, int tam) {
	printf("==========PREFIXOS==========\n");
	printf("\t%s\n", resp);
	
	int i, j;
	for(i = 0; i < tam; i++) {
		printf("%dº -> ", i+1);
		
		for(j = 0; j <= i; j++){
			printf("%c", *(resp + j));
		}
		printf("\n");
	}
}

void sufixo(char *resp) {
	printf("\n==========SUFIXOS===========\n");
	printf("\t%s\n", resp);
	
	int i, tam = strlen(resp);
	for(i = 0; i < tam; i++){
		printf("%s\n", resp + i);
	}
		printf("\n");
	}
