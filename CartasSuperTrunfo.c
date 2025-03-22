#include <stdio.h>

int main (){

    char Carta1[10] = "01";
    char Estado1[10] = "A";
    char Cod1[4] = "A01"; 
    char Cidade1[10];
    int Populacao1;
    float Area1;
    float PIB1;
    int Turisticos1;


    char Carta2[10] = "02";
    char Estado2[10] = "B";
    char Cod2[4] = "B02";
    char Cidade2[10];
    int Populacao2;
    float Area2;
    float PIB2;
    int Turisticos2;
 


    printf("Bem vindo ao cadastro de cartas! \n");
    printf("Você precisará cadastrar duas cartas!\n"); 
        
        printf("Digite as seguintes informações sobre a primeira carta:\n\n");
        printf("Cidade: ");
        scanf("%s", Cidade1);
        printf("População: ");
        scanf("%d", &Populacao1);
        printf("Área em m²: ");
        scanf("%f", &Area1);
        printf("PIB: ");
        scanf("%f", &PIB1);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &Turisticos1);

        float DensidadeP1 = (float) Populacao1 / Area1;
        float PIBPC1 = (PIB1 * 1000000000) / (float) Populacao1;
        

            printf("\nAgora digite as informações da segunda carta:\n\n");
            printf("Cidade: ");
            scanf("%s", Cidade2);
            printf("População: ");
            scanf("%d", &Populacao2);
            printf("Área em m²: ");
            scanf("%f", &Area2);
            printf("PIB: ");
            scanf("%f", &PIB2);
            printf("Numero de pontos turisticos: ");
            scanf("%d", &Turisticos2);

            float DensidadeP2 = (float) Populacao2 / Area2;
            float PIBPC2 = (PIB2 * 1000000000) / (float) Populacao2;


    printf("\nDados da carta %s:\n  Estado: %s\n  Cidade: %s\n  Codigo: %s\n", Carta1, Estado1, Cidade1, Cod1);
    printf("  Numero de Habitantes: %d\n  Área: %.2f km²\n  PIB: %.2f bilhões de reais\n  Quantidade de pontos turisticos: %d\n", Populacao1, Area1, PIB1, Turisticos1);
    printf("  Densidade demografica: %f Hab/km²\n  PIB per capipta: %f reais\n", DensidadeP1, PIBPC1);


    printf("\n\n\nDados da carta %s:\n  Estado: %s\n  Cidade: %s\n  Codigo: %s\n", Carta2, Estado2, Cidade2, Cod2);
    printf("  Numero de Habitantes: %d\n  Área: %.2f km²\n  PIB: %.2f bilhões de reais\n  Quantidade de pontos turisticos: %d\n", Populacao2, Area2, PIB2, Turisticos2);
    printf("  Densidade demografica: %.2f Hab/km²\n  PIB per capita: %.2f reais\n", DensidadeP2, PIBPC2);

    return 0;
}