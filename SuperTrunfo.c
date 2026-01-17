#include <stdio.h>

int main(){
    // Declaração das variáveis da carta 1
    char estado_1[50];
    char nome_da_cidade_1[50];
    float População_1;
    float PIB_1;
    float Área_1;
    int pontos_túristicos_1;
  
    // Declaração das variáveis da carta 2
    char estado_2[100];
    char nome_da_cidade_2[100];
    float População_2;
    float PIB_2;
    float Área_2;
    int pontos_túristicos_2;

    // Entrada de dados da Carta 1
    printf("Estado: ");
    scanf("%s", estado_1);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_da_cidade_1);

    printf("População em (milhões): ");
    scanf("%f", &População_1);

    printf("PIB em (bilhões): ");
    scanf("%f", &PIB_1);

    printf("Área em (Km²): ");
    scanf("%f", &Área_1);

    printf("Quantidade de pontos túristicos: ");
    scanf("%d", &pontos_túristicos_1);

    // Entrada de dados da Carta 2
    printf("Estado: ");
    scanf("%s", estado_2);
    
    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade_2);
    
    printf("População em (milhões): ");
    scanf("%f", &População_2);

    printf("PIB em (bilhões): ");
    scanf("%f", &PIB_2);

    printf("Área em (Km²): ");
    scanf("%f", &Área_2);

    printf("Quantidade de pontos túristicos: ");
    scanf("%d", &pontos_túristicos_2);

    //Saída de dados da carta:1
    printf("\n====== CARTA SUPER TRUNFO 1 ======\n");
    printf("Estado: %s\n", estado_1);
    printf("Nome da cidade: %s\n", nome_da_cidade_1);
    printf("População: %f\n", População_1);
    printf("PIB: %f\n", PIB_1);
    printf("Área em (Km²): %f\n", Área_1);
    printf("Quantidade de pontos túristicos: %d\n", pontos_túristicos_1);

    //Saída de dados da carta:2
    printf("\n====== CARTA SUPER TRUNFO 2 ======\n");
    printf("Estado: %s\n", estado_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("População: %f\n", População_2);
    printf("PIB: %f\n", PIB_2);
    printf("Área em (Km²): %f\n", Área_2);
    printf("Quantidade de pontos túristicos: %d\n", pontos_túristicos_2);


    return 0;

}