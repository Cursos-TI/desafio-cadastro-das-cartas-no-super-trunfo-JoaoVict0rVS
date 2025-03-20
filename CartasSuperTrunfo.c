#include <stdio.h>

int main (){

    char Estado1[10] = "A";
    char Cidade1[10] = "01";
    char Cod1[4] = "A01"; 
    int Populacao1;
    float Area1;
    float PIB1;
    int Turisticos1;

    char Estado2[10] = "B";
    char Cidade2[10] = "01";
    char Cod2[4] = "B01";
    int Populacao2;
    float Area2;
    float PIB2;
    int Turisticos2;

    printf("Bem vindo ao cadastro de cartas! \n");
    printf("Você precisará cadastrar duas cartas!\n"); 
        
        printf("Digite as seguintes informações sobre a primeira carta:\n\n");
        printf("População: ");
        scanf("%d", &Populacao1);
        printf("Área em m²: ");
        scanf("%f", &Area1);
        printf("PIB: ");
        scanf("%f", &PIB1);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &Turisticos1);


            printf("\nAgora digite as informações da segunda carta:\n\n");
            printf("População: ");
            scanf("%d", &Populacao2);
            printf("Área em m²: ");
            scanf("%f", &Area2);
            printf("PIB: ");
            scanf("%f", &PIB2);
            printf("Numero de pontos turisticos: ");
            scanf("%d", &Turisticos2);


    printf("\nDados da primeira carta:\n  Estado: %s\n  Cidade: %s\n  Codigo: %s\n", Estado1, Cidade1, Cod1);
    printf("  Numero de Habitantes: %d\n  Área²: %f\n  PIB: %f\n  Quantidade de pontos turisticos: %d", Populacao1, Area1, PIB1, Turisticos1);

    printf("\n\n\nDados da segunda carta:\n  Estado: %s\n  Cidade: %s\n  Codigo: %s\n", Estado2, Cidade2, Cod2);
    printf("  Numero de Habitantes: %d\n  Área²: %f\n  PIB: %f\n  Quantidade de pontos turisticos: %d", Populacao2, Area2, PIB2, Turisticos2);
}