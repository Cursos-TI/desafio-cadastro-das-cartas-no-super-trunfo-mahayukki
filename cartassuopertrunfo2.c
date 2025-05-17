#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    int codigo1 = 1;
    char estado1[] = "São Paulo";
    char cidade1[] = "Campinas";
    int populacao1 = 1213792;
    float area1 = 795.7;
    float pib1 = 64.5;
    int pontosTuristicos1 = 12;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em bilhões para reais por pessoa

    // Declaração das variáveis da carta 2
    int codigo2 = 2;
    char estado2[] = "Bahia";
    char cidade2[] = "Salvador";
    int populacao2 = 2886698;
    float area2 = 692.8;
    float pib2 = 63.1;
    int pontosTuristicos2 = 15;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB em bilhões para reais por pessoa

    // Exibição das cartas
    printf("=== Cartas de Cidades ===\n\n");

    printf("Carta %02d - %s - %s\n", codigo1, estado1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: R$ %.1f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n\n", pibPerCapita1);

    printf("Carta %02d - %s - %s\n", codigo2, estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.1f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}