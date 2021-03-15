#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char *pont_tam1 = malloc(30 * sizeof(char));
    char *pont_tam2 = malloc(30 * sizeof(char));
    char *pont_tam3 = malloc(30 * sizeof(char));

    printf("Digite tres nomes: \n");
    gets(pont_tam1);
    gets(pont_tam2);
    gets(pont_tam3);

    printf("\n - Ordem Crescente: ");
    if(strlen(pont_tam1)<strlen(pont_tam2) && strlen(pont_tam1)<strlen(pont_tam3)){
        printf("%s", pont_tam1);
        if(strlen(pont_tam2)<strlen(pont_tam3)){
            printf("-%s", pont_tam2);
            printf("-%s", pont_tam3);
        }else{
            printf("-%s", pont_tam3);
            printf("-%s", pont_tam2);
        }
    }else if(strlen(pont_tam2)<strlen(pont_tam1) && strlen(pont_tam2)<strlen(pont_tam3)){
        printf("%s", pont_tam2);
        if(strlen(pont_tam1)<strlen(pont_tam3)){
            printf("-%s", pont_tam1);
            printf("-%s", pont_tam3);
        }else{
            printf("-%s", pont_tam3);
            printf("-%s", pont_tam1);
        }
    }else{
        printf("%s", pont_tam3);
        if(strlen(pont_tam1)<strlen(pont_tam2)){
            printf("-%s", pont_tam1);
            printf("-%s", pont_tam2);
        }else{
            printf("-%s", pont_tam2);
            printf("-%s", pont_tam1);
        }
    }
    return 0;
}