#include <stdio.h>

int main(){
    // Declaração das variáveis da carta 1
    char estado_1[50];
    char nome_da_cidade_1[50];
    float Populacao_1;
    float PIB_1;
    float area_1;
    int pontos_turisticos_1;
    float densidade_populacional_1;
    float PIB_per_capta_1;

    // Declaração das variáveis da carta 2

    char estado_2[100];
    char nome_da_cidade_2[100];
    float Populacao_2;
    float PIB_2;
    float area_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;
    float PIB_per_capta_2;
    
    // Entrada de dados da Carta 1

    printf("Estado: ");
    scanf("%s", estado_1);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_da_cidade_1);

    printf("População em (milhões): ");
    scanf("%f", &Populacao_1);

    printf("PIB em (bilhões): ");
    scanf("%f", &PIB_1);

    printf("Área em (Km²): ");
    scanf("%f", &area_1);

    printf("Quantidade de pontos túristicos: ");
    scanf("%d", &pontos_turisticos_1);

    densidade_populacional_1 = Populacao_1 / area_1;
    PIB_per_capta_1 = PIB_1 / Populacao_1;


    // Entrada de dados da Carta 2
    printf("Estado: ");
    scanf("%s", estado_2);
    
    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade_2);
    
    printf("População em (milhões): ");
    scanf("%f", &Populacao_2);

    printf("PIB em (bilhões): ");
    scanf("%f", &PIB_2);

    printf("Área em (Km²): ");
    scanf("%f", &area_2);

    printf("Quantidade de pontos túristicos: ");
    scanf("%d", &pontos_turisticos_2);

    densidade_populacional_2 = Populacao_2 / area_2;
    PIB_per_capta_2 = PIB_2 / Populacao_2;

   
    //Saída de dados da carta:1
    printf("\n====== CARTA SUPER TRUNFO 1 ======\n");
    printf("Estado: %s\n", estado_1);
    printf("Nome da cidade: %s\n", nome_da_cidade_1);
    printf("População: %f\n", Populacao_1);
    printf("PIB: %f\n", PIB_1);
    printf("Área em (Km²): %f\n", area_1);
    printf("Quantidade de pontos túristicos: %d\n", pontos_turisticos_1);
    printf("Densidade populacional: %.2f\n", densidade_populacional_1);
    printf("PIB per Capta: %.2f\n", PIB_per_capta_1);

    //Saída de dados da carta:2
    printf("\n====== CARTA SUPER TRUNFO 2 ======\n");
    printf("Estado: %s\n", estado_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("População: %f\n", Populacao_2);
    printf("PIB: %f\n", PIB_2);
    printf("Área em (Km²): %f\n", area_2);
    printf("Quantidade de pontos túristicos: %d\n", pontos_turisticos_2);
    printf("Densidade populacional: %.2f\n", densidade_populacional_2);
    printf("PIB per Capta: %.2f\n", PIB_per_capta_2);


    return 0;

}
