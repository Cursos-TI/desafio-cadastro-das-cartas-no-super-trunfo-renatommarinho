#include <stdio.h>
    //Atividade feita por Renato Marinho

   

int main() {
    printf("Desafio Carta Super Trunfo - Mestre\n");

    //Primeira carta
    char estado1[2];
    char codigo1[50];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    printf("\n--- Carta 1 ---\n");
    printf("Digite o Estado (uma letra A-H): \n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área em Km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;

    //Cálculo do super Poder

    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + ( 1.0f / densidade_populacional1);

    // Agora a saída pulando linha e agrupado da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Pib per Capita: %.2f reais\n", pib_per_capita1);

    //Segunda Carta
    char estado2[2];
    char codigo2[50];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    printf("\n--- Carta 2 ---\n");
    printf("Digite o Estado (uma letra A-H): \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / populacao2;

    //Cálculo do Super poder 2
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

    // Agora a saída pulando linha e agrupado da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Pib per Capita: %.2f reais\n", pib_per_capita2);


    //Comparações

    printf("\n--- Comparação de Cartas Super Trunfo ---\n");
    printf("População: Carta 1 venceu: %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n" area1 > area2);
    printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu %d\n", pontos1 > pontos2);

    // menor vence
    printf("Densidade Populacional: Carta 1 venceu %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu %d\n", super_poder1 > super_poder2);


    return 0;
}
