#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char *pont_tam1 = malloc(30 * sizeof(char));
    char *pont_tam2 = malloc(30 * sizeof(char));
    char *pont = malloc(30 * sizeof(char));
    int i=0, cont, contAux;

    printf("Digite duas palavras:\n");
    gets(pont_tam1);
    gets(pont_tam2);

    while ( pont_tam1[i]==pont_tam2[i] ){ i++; }

    if(strncmp(pont_tam1, pont_tam2, i)==0){
        strncpy(pont, pont_tam1, i);
        printf("- Letras Iguais: %i / %s ", i, pont);
    }

    return 0;
}