#include <stdio.h>

int main ()
{
    char estado[50], cidade[50], estado2[50], cidade2[50], codigo[5], codigo2[5];
    int populacao, qtd_tur, populacao2, qtd_tur2;
    float area, pib, area2, pib2;

    printf("---Jogo Supertrunfo---\n");

    printf("\nCarta 01\nInforme o Estado: "); 
    fgets(estado,49,stdin);
    printf("Informe o código da carta: ");
    fgets(codigo,4,stdin);
    getchar();
    printf("Informe o Nome da Cidade: ");
    fgets(cidade,49,stdin); //fgets(nome da variável em que a tring ficará salva, qtd array-1, stdin=entrada do teclado);
    printf("Informe a população dessa cidade: ");
    scanf("%d", &populacao);
    getchar();
    printf("Informe a área em Kms Quadrados: ");
    scanf("%f", &area);
    getchar();
    printf("Informme o PIB em milhões de reais: ");
    scanf("%f", &pib);
    getchar();
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtd_tur);
    getchar();
    
    printf("\nCarta 02\nInforme o Estado: "); 
    fgets(estado2,49,stdin);
    printf("Informe o código da carta: ");
    fgets(codigo2,4,stdin);
    getchar();
    printf("Informe o Nome da Cidade: ");
    fgets(cidade2,49,stdin); //fgets(nome da variável em que a tring ficará salva, qtd array-1, stdin=entrada do teclado);
    printf("Informe a população dessa cidade: ");
    scanf("%d", &populacao2);
    getchar();
    printf("Informe a área em Kms Quadrados: ");
    scanf("%f", &area2);
    getchar();
    printf("Informme o PIB em milhões de reais: ");
    scanf("%f", &pib2);
    getchar();
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtd_tur2); 
    getchar();

    printf("\n----Cidade 01----\n");
    printf("Estado: %s", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade Pontos Turisticos: %d\n", qtd_tur);
    
    printf("\n----Cidade 02----\n");
    printf("Estado: %s", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade Pontos Turisticos: %d\n", qtd_tur2);
    return 0;
}
