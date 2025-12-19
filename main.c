/*
Criar um MENU
1. Cadastrar cartas 1 e 2
2. Escolher atributo de comparacao
3. Exibir Resultado
4. Sair
*/ 

//teste

#include <stdio.h>

int main ()
{
    char estado[50], cidade[50], estado2[50], cidade2[50], codigo[5], codigo2[5]; //codigo[5] pois 'x''1''2''\n'
    int populacao, qtd_tur, populacao2, qtd_tur2, atributo;
    float area, pib, area2, pib2, densidade, densidade2;


    //Cadastro da Carta 01
    printf("---Cadastro de Cartas---\n");
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
                
    //Menu para Escolher Atributo de Comparação
    printf("\nEscolha Qual atributo será usado para decidir a carta vencedora: ");
    printf("\n1. População");
    printf("\n2. Area");
    printf("\n3. Densidade Demográfica");
    printf("\n4. PIB");
    printf("\n5. Numero de pontos Turisticos");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &atributo);
    
    switch(atributo){
        
        case 1:   if(populacao>populacao2){
                    printf("\nA cidade %s ganhou com uma populacao de %d habitantes", cidade, populacao);
                } else if (populacao2>populacao){
                    printf("\nA cidade %s ganhou com uma populacao de %d habitantes", cidade2, populacao2);
                } else{
                    printf("\nEmpatou! As duas cidades tem a mesma populacao.");
                }
                break;
                
        case 2:   if(area>area2){
                    printf("\nA cidade %sganhou com uma área de %.2f KM quadrados", cidade, area);
                } else if(area2>area){
                    printf("\nA cidade %sganhou com uma área de %.2f KM quadrados", cidade2, area2);
                } else{
                    printf("\nEmpatou! As duas cidades tem a mesma área.");
                }
                break;
                
        case 3: //cálcuolo da densidade demográfica = populacao/área
        
                densidade = populacao/area;
                densidade2 = populacao2/area2;
                
                  if(densidade<densidade2){
                    printf("\nA cidade %sganhou com uma densidade menor de %.2f habitantes por km quadrado", cidade, densidade);
                } else if(densidade2<densidade){
                    printf("\nA cidade %sganhou com uma densidade menor de %.2f habitantes por km quadrado", cidade2, densidade2);
                } else{
                    printf("\nEmpatou! As duas cidades tem a mesma densidade demográfica.");
                }
                break;
                
        case 4:   if(pib>pib2){
                    printf("\nA cidade %sganhou com um PIB de %.2f Milhoes", cidade, pib);
                } else if(pib2>pib){
                    printf("\nA cidade %sganhou com um PIB de %.2f Milhoes", cidade2, pib2);
                } else{
                    printf("\nEmpatou! As duas cidades tem o mesmo PIB");
                }
                break;
                
        case 5:   if(qtd_tur>qtd_tur2){
                    printf("\nA cidade %sganhou com %d pontos turisticos", cidade, qtd_tur);
                } else if(qtd_tur2>qtd_tur){
                    printf("\nA cidade %sganhou com %d pontos turisticos", cidade2, qtd_tur2);
                } else{
                    printf("\nEmpatou! As duas cidades tem o mesmo numero de pontos turisticos");
                }
                break;
                
        default: printf("Opcao Inválida");
                
    }

    
    return 0;
}
