#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países - Novato

int main() {
    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Cadastro da Primeira Carta
    printf("Cadastro da Primeira Carta\n");

    printf("Digite o estado: ");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%4s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1); 

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("-\n");

    // Cadastro da Primeira Carta
    printf("Cadastro da Segunda Carta\n");

    printf("Digite o estado (UF): ");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("-\n");

    // Exibição dos Dados
    printf("Primeira Carta: 1: %s ---\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("-\n");

    printf("Segunda Carta: 2: %s ---\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("-\n");

    // Comparação de Cartas (Atributo: PIB) - maior valor vence.
    printf("Resultado da Comparacao (PIB)\n");
    if (pib1 > pib2) {
        printf("Vencedor: %s (%s) com PIB de R$ %.2f bilhoes.\n", nome1, codigo1, pib1);
    } else if (pib2 > pib1) {
        printf("Vencedor: %s (%s) com PIB de R$ %.2f bilhoes.\n", nome2, codigo2, pib2);
    } else {
        printf("Empate! Ambas as cidades tem o mesmo PIB.\n");
    }
    printf("-\n");

    return 0;
}

