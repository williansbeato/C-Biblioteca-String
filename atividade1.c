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

    printf("\n - Ordem Alfabetica: ");

    if(strcmp(pont_tam1,pont_tam2)<0 && strcmp(pont_tam1, pont_tam3)<0){
        printf("%s", pont_tam1);
        if(strcmp(pont_tam2,pont_tam3)<0){
            printf("-%s", pont_tam2);
            printf("-%s", pont_tam3);
        }else{
            printf("-%s", pont_tam3);
            printf("-%s", pont_tam2);
        }
    }else if(strcmp(pont_tam2,pont_tam1)<0 && strcmp(pont_tam2, pont_tam3)<0){
        printf("%s", pont_tam2);
        if(strcmp(pont_tam1,pont_tam3)<0){
            printf("-%s", pont_tam1);
            printf("-%s", pont_tam3);
        }else{
            printf("-%s", pont_tam3);
            printf("-%s", pont_tam1);
        }
    }else{
        printf("%s", pont_tam3);
        if(strcmp(pont_tam1,pont_tam2)<0){
            printf("-%s", pont_tam1);
            printf("-%s", pont_tam2);
        }else{
            printf("-%s", pont_tam2);
            printf("-%s", pont_tam1);
        }
    }
    return 0;
}