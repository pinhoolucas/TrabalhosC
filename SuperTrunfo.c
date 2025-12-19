/*
Criar um MENU
1. Cadastrar cartas 1 e 2
2. Escolher atributo de comparacao
3. Exibir Resultado
4. Sair
*/ 

#include <stdio.h>

int main ()
{
    char estado[50], cidade[50], estado2[50], cidade2[50], codigo[5], codigo2[5]; //codigo[5] pois 'x''1''2''\n'
    int populacao, qtd_tur, populacao2, qtd_tur2, atributo;
    float area, pib, area2, pib2;


    //Cadastro da Carta 01
    printf("\n---Cadastro de Cartas---\n");
    printf("\nCarta 01\nInforme o Estado: "); 
    fgets(estado,sizeof(estado),stdin);
    printf("Informe o código da carta: ");
    fgets(codigo,sizeof(codigo),stdin);
    printf("Informe o Nome da Cidade: ");
    fgets(cidade,sizeof(cidade),stdin); 
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

    //Cadastro da Carta 02
    printf("\nCarta 02\nInforme o Estado: "); 
    fgets(estado2,sizeof(estado2),stdin);
    printf("Informe o código da carta: ");
    fgets(codigo2,sizeof(codigo2),stdin);
    printf("Informe o Nome da Cidade: ");
    fgets(cidade2,sizeof(cidade2),stdin); 
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

    //Mostra Carta 01
    printf("\n----Cidade 01----\n");
    printf("Estado: %s", estado);
    printf("Código da carta: %s", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade Pontos Turisticos: %d\n", qtd_tur);
                
    //Mostra Carta 02
    printf("\n----Cidade 02----\n");
    printf("Estado: %s", estado2);
    printf("Código da carta: %s", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade Pontos Turisticos: %d\n", qtd_tur2);
                
    //Escolher Atributo de Comparação
    printf("\nEscolha Qual atributo será usado para decidir a carta vencedora: ");
    printf("\n1. População");
    printf("\n2. Area");
    printf("\n3. PIB");
    printf("\n4. Numero de pontos Turisticos");
    printf("\n5. Densidade Demografica");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &atributo);
    
    switch(atributo){
        
        case 1:   if(populacao>populacao2){
                    printf("\nA cidade %sganhou com uma populacao de %d habitantes", cidade, populacao);
                } else if (populacao2>populacao){
                    printf("\nA cidade %sganhou com uma populacao de %d habitantes", cidade2, populacao2);
                } else{
                    printf("\nEmpatou! As duas cidades tem a mesma populacao.");
                }
        
    }





    
    return 0;
}
