#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char *pont_tam1 = malloc(10 * sizeof(char));
	char *pont_tam2 = malloc(10 * sizeof(char));
	char *pont_tam3 = malloc(10 * sizeof(char));
	char *pont = malloc(30 * sizeof(char));

	printf("Digite tres palavras: \n");
	gets(pont_tam1);
	gets(pont_tam2);
	gets(pont_tam3);
	
	pont=pont_tam1;
	
	strcat(pont,pont_tam2);
	strcat(pont,pont_tam3);

	
	printf("\n - Concatenado: %s", pont);

	printf("\n\n");

return 0;
}