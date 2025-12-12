#include <stdio.h>

int main ()
{
    char estado, cidade[50], estado2, cidade2[50];
    int populacao, qtd_tur, populacao2, qtd_tur2;
    float area, pib, area2, pib2;

    printf("---Jogo Supertrunfo---\n");

    printf("\nCarta 01\nInforme o Estado (A-H): "); //De A até H é o código do primeiro caractere da carta
    scanf(" %c", &estado); //Lê o caractere digitado acima
    getchar(); //limpa o buffer de teclado
    printf("Informe o Nome da Cidade: ");
    fgets(cidade,49,stdin); //fgets(nome da variável em que a tring ficará salva, qtd array-1, stdin=entrada do teclado);
    printf("Informe a população dessa cidade: ");
    scanf("%d", &populacao);
    printf("Informe a área em Kms Quadrados: ");
    scanf("%f", &area);
    printf("Informme o PIB em milhões de reais: ");
    scanf("%f", &pib);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtd_tur);   
    
    printf("\nCarta 02\nInforme o Estado (A-H): "); //De A até H é o código do primeiro caractere da carta
    scanf(" %c", &estado2); //Lê o caractere digitado acima
    printf("Informe o Nome da Cidade: ");
    fgets(cidade2,49,stdin); //fgets(nome da variável em que a tring ficará salva, qtd array-1, stdin=entrada do teclado);
    printf("Informe a população dessa cidade: ");
    scanf("%d", &populacao2);
    printf("Informe a área em Kms Quadrados: ");
    scanf("%f", &area2);
    printf("Informme o PIB em milhões de reais: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtd_tur2); 

    printf("\n----Cidade 01----\n");
    printf("Estado: %c\n", estado);
    printf("Cidade: %s", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade Pontos Turisticos: %d\n", qtd_tur);
    
    printf("\n----Cidade 02----\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade Pontos Turisticos: %d\n", qtd_tur2);
    return 0;
}
