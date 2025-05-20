#include <stdio.h>

int main() {
    // Cadastro das cartas - Carta 1
    int codigo1 = 1;
    char estado1[] = "São Paulo";
    char cidade1[] = "Campinas";
    int populacao1 = 1213792;
    float area1 = 795.7;
    float pib1 = 64.5; // em bilhões
    int pontosTuristicos1 = 12;

    // Cadastro das cartas - Carta 2
    int codigo2 = 2;
    char estado2[] = "Bahia";
    char cidade2[] = "Salvador";
    int populacao2 = 2886698;
    float area2 = 692.8;
    float pib2 = 63.1; // em bilhões
    int pontosTuristicos2 = 15;

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibir os dados das cartas
    printf("=== Carta 1 ===\n");
    printf("Código: %d\nEstado: %s\nCidade: %s\n", codigo1, estado1, cidade1);
    printf("População: %d\nÁrea: %.1f km²\nPIB: R$ %.1f bilhões\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n",
           pontosTuristicos1, densidade1, pibPerCapita1);

    printf("=== Carta 2 ===\n");
    printf("Código: %d\nEstado: %s\nCidade: %s\n", codigo2, estado2, cidade2);
    printf("População: %d\nÁrea: %.1f km²\nPIB: R$ %.1f bilhões\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n",
           pontosTuristicos2, densidade2, pibPerCapita2);

    // === COMPARAÇÃO ===
    // Escolha do atributo para comparação: População
    printf("=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    // Comparar população
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

 return 0;
}