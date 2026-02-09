#include <stdio.h>

int main() {
// utilização de IA, porém utilizei pois ja entendo funções como for while if else e elif pois ja utilizo para programar em Python
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


    // =========================
    // CADASTRO CARTA 1
    // =========================

    printf("Cadastro Carta 1\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado);

    printf("Código (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos);


    // =========================
    // CADASTRO CARTA 2
    // =========================

    printf("\nCadastro Carta 2\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado2);

    printf("Código (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // =========================
    // EXIBIÇÃO DOS DADOS
    // =========================

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);


    // =========================
    // CÁLCULOS CARTA 1
    // =========================

    densidade = (float)populacao / area;
    pibpercapita = pib / populacao;

    printf("\nCálculos Carta 1\n");
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", pibpercapita);


    // =========================
    // CÁLCULOS CARTA 2
    // =========================

    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("\nCálculos Carta 2\n");
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    
    // =========================
    // DECISÃO DE CARTA VENCEDORA
    // =========================
    
    printf("\nComparação de cartas (Atributo: População):\n");

printf("Carta 1 - %s: %d habitantes\n", cidade, populacao);
printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);

if (populacao > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
}
else if (populacao2 > populacao) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}
else {
    printf("Resultado: Empate! As duas cidades possuem a mesma população.\n");
}

    return 0;
}
