#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void) {
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
		for(j = 0; j <= i; j++){
			printf("%c", *(resp + j));
		}
		printf("\n");
	}
}

void sufixo(char *resp, int tam) {
	printf("==========SUFIXO==========\n");
	printf("\t%s\n", resp);
	
	int i, j;
	for(i = tam-1; i >= 0; i--) {
		for(j = tam-1; j >= i; j--){
			printf("%c", *(resp + j));
		}
		printf("\n");
	}
}
