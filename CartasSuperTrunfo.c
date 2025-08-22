#include <stdio.h>

char estado1; 
char estado2;
char codigo_carta1[3];
char codigo_carta2[3];
char cidade1[20];
char cidade2[20];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int ponto_turistico1;
int ponto_turistico2;


int main() {

    printf("Carta 1 \n");
    
    printf("Digite uma letra de 'A' a 'H' da carta 1: \n");
    scanf("%c", &estado1);

    printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) da carta 1: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade 1: \n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados da cidade 1: \n");
    scanf("%f", &area1);
    
    printf("Digite o Produto Interno Bruto da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%i", &ponto_turistico1);

    //-------------------------------------------------------------------------


    printf("Carta 2 \n");
    
    printf("Digite uma letra de 'A' a 'H' da carta 2: \n");
    scanf("%c", &estado2);

    printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) da carta 2: \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade 2: \n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados da cidade 2: \n");
    scanf("%f", &area2);
    
    printf("Digite o Produto Interno Bruto da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: \n");
    scanf("%i", &ponto_turistico2);

    //---------------------------------------------------------------------------------
    

    printf("\nCarta 1");

    printf("\nEstado: %c", estado1);

    printf("\nCódigo: %s", codigo_carta1);

    printf("\nNome da Cidade: %s", cidade1);

    printf("\nPopulação: %i", populacao1);

    printf("\nÁrea: %f km²", area1);
    
    printf("\nPIB: %f bilhões de reais", pib1);

    printf("\nNúmero de Pontos Turísticos: %i\n", ponto_turistico1);

    //-----------------------------------------------------------------------

    printf("\nCarta 2");

    printf("\nEstado: %c", estado2);

    printf("\nCódigo: %s", codigo_carta2);

    printf("\nNome da Cidade: %s", cidade2);

    printf("\nPopulação: %i", populacao2);

    printf("\nÁrea: %f km²", area2);
    
    printf("\nPIB: %f bilhões de reais", pib2);

    printf("\nNúmero de Pontos Turísticos: %i\n", ponto_turistico2);

    return 0;
}
