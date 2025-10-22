#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Atividade feita por Renato Marinho

int main()
{
    printf("Desafio Carta Super Trunfo Desen Lógico - Mestre\n");

    // --- Carta 1 ---
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

    // --- Carta 2 ---
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

    // --- Menu de comparação ---
    int opcao;
    printf("\n === Menu de Comparação ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n=== Comparação: População ===\n");
        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s!\n", cidade1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Vencedor: %s!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("\n=== Comparação da Área ===\n");
        if (area1 > area2)
        {
            printf("Vencedor: %s!\n", cidade1);
        }
        else if (area2 > area1)
        {
            printf("Vencedor: %s!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 3:
        printf("\n=== Comparação do PIB ===\n");
        if (pib1 > pib2)
        {
            printf("Vencedor: %s!\n", cidade1);
        }
        else if (pib2 > pib1)
        {
            printf("Vencedor: %s!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4:
        printf("\n=== Comparação dos Pontos Turísticos ===\n");
        if (pontos1 > pontos2)
        {
            printf("Vencedor: %s!\n", cidade1);
        }
        else if (pontos2 > pontos1)
        {
            printf("Vencedor: %s!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5:
        printf("\n=== Comparação Densidade Demográfica ===\n");
        if (densidade1 < densidade2)
        {
            printf("Vencedor: %s!\n", cidade1);
        }
        else if (densidade2 < densidade1)
        {
            printf("Vencedor: %s!\n", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    default:
        printf("\nOpção inválida! Escolha de 1 a 5.\n");
        break;
    }

    // --- Parte 2: Jogo de atributos aleatórios ---
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

    srand(time(0));
    ataque1 = rand() % 100 + 1;
    ataque2 = rand() % 100 + 1;
    defesa1 = rand() % 100 + 1;
    defesa2 = rand() % 100 + 1;
    recuo1 = rand() % 100 + 1;
    recuo2 = rand() % 100 + 1;

    printf("\n\n=== Batalha Aleatória de Atributos ===\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A. Ataque\nD. Defesa\nR. Recuo\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
        printf("Você escolheu Ataque!\n");
        resultado1 = ataque1 > ataque2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu Defesa!\n");
        resultado1 = defesa1 > defesa2 ? 1 : 0;
        break;
    case 'R':
    case 'r':
        printf("Você escolheu Recuo!\n");
        resultado1 = recuo1 > recuo2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida!\n");
        resultado1 = 0;
        break;
    }

    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    printf("A. Ataque\nD. Defesa\nR. Recuo\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
    }
    else
    {
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
            printf("Você escolheu Ataque!\n");
            resultado2 = ataque1 > ataque2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Defesa!\n");
            resultado2 = defesa1 > defesa2 ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("Você escolheu Recuo!\n");
            resultado2 = recuo1 > recuo2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            resultado2 = 0;
            break;
        }

        if (resultado1 && resultado2)
        {
            printf("Parabéns, você venceu!\n");
        }
        else if (resultado1 == resultado2)
        {
            printf("Empate!\n");
        }
        else
        {
            printf("Infelizmente você perdeu!\n");
        }
    }

    return 0;
}
