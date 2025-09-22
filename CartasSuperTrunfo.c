#include <stdio.h>
// Atividade feita por Renato Marinho

int main()
{
    printf("Desafio Carta Super Trunfo Lógica - Novato\n");

    // Primeira carta
    char estado1[3];
    char codigo1[50];
    char cidade1[50];
    unsigned long populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    printf("\n--- Carta 1 ---\n");
    printf("Digite o Estado (ex: SP): ");
    scanf("%2s", estado1);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área em Km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cálculo do super poder
    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1.0f / densidade1);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Segunda carta
    char estado2[3];
    char codigo2[50];
    char cidade2[50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    printf("\n--- Carta 2 ---\n");
    printf("Digite o Estado (ex: RJ): ");
    scanf("%2s", estado2);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Super poder 2
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade2);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação pela População
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n\n");
    printf("Carta 1 - %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2)
    {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1)
    {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else
    {
        printf("\nResultado: Empate! As duas cidades têm a mesma população.\n");
    }

    return 0;
}
