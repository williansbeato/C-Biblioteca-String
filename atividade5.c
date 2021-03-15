#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char *pont_tam1 = malloc(30 * sizeof(char));
    char *pont_tam2 = malloc(30 * sizeof(char));
    char *pont_tam3 = malloc(30 * sizeof(char));
    char *pont = malloc(90 * sizeof(char));

    int cont=0;

    printf("Digite o valor inteiro:");
    scanf("%i", &cont);
    getchar();

    printf("Digite tres palavras: \n");
    gets(pont_tam1);
    gets(pont_tam2);
    gets(pont_tam3);

    printf("\nConcatenado: ");

    strncat(pont, pont_tam1, cont);
    strncat(pont, pont_tam2, cont);
    strncat(pont, pont_tam3, cont);

    printf("%s", pont);

    return 0;
}