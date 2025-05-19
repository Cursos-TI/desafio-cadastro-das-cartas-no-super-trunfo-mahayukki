#include <stdio.h>

int main() {
    // Carta 1 - Dados fixos
    int codigo1 = 1;
    char estado1[] = "São Paulo";
    char cidade1[] = "Campinas";
    unsigned long int populacao1 = 1213792;
    float area1 = 795.7;
    float pib1 = 64.5;
    int pontosTuristicos1 = 12;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Carta 2 - Dados fixos
    int codigo2 = 2;
    char estado2[] = "Bahia";
    char cidade2[] = "Salvador";
    unsigned long int populacao2 = 2886698;
    float area2 = 692.8;
    float pib2 = 63.1;
    int pontosTuristicos2 = 15;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibir dados das cartas
    printf("=== Carta 1 ===\n");
    printf("Código: %d\nEstado: %s\nCidade: %s\n", codigo1, estado1, cidade1);
    printf("População: %lu\nÁrea: %.1f km²\nPIB: R$ %.1f bilhões\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n", pontosTuristicos1, densidade1, pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("=== Carta 2 ===\n");
    printf("Código: %d\nEstado: %s\nCidade: %s\n", codigo2, estado2, cidade2);
    printf("População: %lu\nÁrea: %.1f km²\nPIB: R$ %.1f bilhões\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n", pontosTuristicos2, densidade2, pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // Comparações
    printf("=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

 return 0;
}