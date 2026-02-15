#include <stdio.h>

int main() {

    // =========================
    // DECLARAÇÃO DE VARIÁVEIS
    // =========================

    char estado, estado2;
    char codigo[20], codigo2[20];
    char cidade[50], cidade2[50];

    int populacao, pontosTuristicos;
    int populacao2, pontosTuristicos2;

    float area, pib;
    float area2, pib2;

    float densidade, densidade2;
    float pibpercapita, pibpercapita2;

    int opcao;

    // =========================
    // CADASTRO CARTA 1
    // =========================

    printf("Cadastro Carta 1\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // =========================
    // CADASTRO CARTA 2
    // =========================

    printf("\nCadastro Carta 2\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // CALCULOS
    // =========================

    densidade = (float)populacao / area;
    pibpercapita = pib / populacao;

    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // =========================
    // MENU INTERATIVO
    // =========================

    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("Escolha o atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (MENOR vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA BATALHA ---\n");

    switch(opcao) {

    case 1:
        printf("Atributo: Populacao\n");
        printf("%s: %d habitantes\n", cidade, populacao);
        printf("%s: %d habitantes\n", cidade2, populacao2);

        if (populacao > populacao2)
            printf("Vencedor: %s\n", cidade);
        else if (populacao2 > populacao)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Atributo: Area\n");
        printf("%s: %.2f km2\n", cidade, area);
        printf("%s: %.2f km2\n", cidade2, area2);

        if (area > area2)
            printf("Vencedor: %s\n", cidade);
        else if (area2 > area)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("Atributo: PIB\n");
        printf("%s: %.2f\n", cidade, pib);
        printf("%s: %.2f\n", cidade2, pib2);

        if (pib > pib2)
            printf("Vencedor: %s\n", cidade);
        else if (pib2 > pib)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Atributo: Pontos Turisticos\n");
        printf("%s: %d\n", cidade, pontosTuristicos);
        printf("%s: %d\n", cidade2, pontosTuristicos2);

        if (pontosTuristicos > pontosTuristicos2)
            printf("Vencedor: %s\n", cidade);
        else if (pontosTuristicos2 > pontosTuristicos)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Atributo: Densidade Demografica (MENOR vence)\n");
        printf("%s: %.2f\n", cidade, densidade);
        printf("%s: %.2f\n", cidade2, densidade2);

        if (densidade < densidade2)
            printf("Vencedor: %s\n", cidade);
        else if (densidade2 < densidade)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}
