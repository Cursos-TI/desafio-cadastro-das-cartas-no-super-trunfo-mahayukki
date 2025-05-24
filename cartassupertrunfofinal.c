#include <stdio.h>
#include <string.h>

int main() {
    // Cadastro das cartas
    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0;
    int pontosTuristicos1 = 20;
    float densidade1 = populacao1 / area1;

    char pais2[] = "México";
    int populacao2 = 126000000;
    float area2 = 1964375.0;
    float pib2 = 1272.0;
    int pontosTuristicos2 = 18;
    float densidade2 = populacao2 / area2;

    int atributo1 = 0, atributo2 = 0;
    float valor1_p1 = 0, valor2_p1 = 0, valor1_p2 = 0, valor2_p2 = 0;
    float soma1 = 0, soma2 = 0;

    // Escolha do primeiro atributo
    printf("=== COMPARAÇÃO DE CARTAS DE PAÍSES ===\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha (1 a 5): ");
    scanf("%d", &atributo1);

    // Validação
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida. Encerrando o programa.\n");
        return 1;
    }

    // Menu dinâmico para segundo atributo
    printf("\nEscolha o segundo atributo para comparar:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }

    printf("Digite sua escolha: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opção inválida. Encerrando o programa.\n");
        return 1;
    }

    // Função auxiliar para obter valores
    switch (atributo1) {
        case 1: valor1_p1 = populacao1; valor1_p2 = populacao2; break;
        case 2: valor1_p1 = area1; valor1_p2 = area2; break;
        case 3: valor1_p1 = pib1; valor1_p2 = pib2; break;
        case 4: valor1_p1 = pontosTuristicos1; valor1_p2 = pontosTuristicos2; break;
        case 5: valor1_p1 = densidade1; valor1_p2 = densidade2; break;
    }

    switch (atributo2) {
        case 1: valor2_p1 = populacao1; valor2_p2 = populacao2; break;
        case 2: valor2_p1 = area1; valor2_p2 = area2; break;
        case 3: valor2_p1 = pib1; valor2_p2 = pib2; break;
        case 4: valor2_p1 = pontosTuristicos1; valor2_p2 = pontosTuristicos2; break;
        case 5: valor2_p1 = densidade1; valor2_p2 = densidade2; break;
    }

    soma1 = valor1_p1 + valor2_p1;
    soma2 = valor1_p2 + valor2_p2;

    // Exibição clara
    printf("\nComparando %s e %s com os atributos escolhidos:\n", pais1, pais2);

    for (int i = 1; i <= 2; i++) {
        int atributo = (i == 1) ? atributo1 : atributo2;
        float v1 = (i == 1) ? valor1_p1 : valor2_p1;
        float v2 = (i == 1) ? valor1_p2 : valor2_p2;

        printf("\nAtributo %d: ", atributo);
        switch (atributo) {
            case 1: printf("População\n"); break;
            case 2: printf("Área (km²)\n"); break;
            case 3: printf("PIB (R$ bilhões)\n"); break;
            case 4: printf("Pontos Turísticos\n"); break;
            case 5: printf("Densidade Demográfica (hab/km²)\n"); break;
        }

        printf("%s: %.4f\n", pais1, v1);
        printf("%s: %.4f\n", pais2, v2);
        if (atributo == 5) {
            printf("Vencedor: %s\n", (v1 < v2) ? pais1 : (v2 < v1) ? pais2 : "Empate");
        } else {
            printf("Vencedor: %s\n", (v1 > v2) ? pais1 : (v2 > v1) ? pais2 : "Empate");
        }
    }

    // Exibe a soma e resultado final
    printf("\nSoma dos atributos:\n");
    printf("%s: %.4f\n", pais1, soma1);
    printf("%s: %.4f\n", pais2, soma2);

    printf("\nResultado final: ");
    if (soma1 > soma2) {
        printf("%s venceu a rodada!\n", pais1);
    } else if (soma2 > soma1) {
        printf("%s venceu a rodada!\n", pais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}