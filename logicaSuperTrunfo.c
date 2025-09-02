#include <stdio.h>

struct Carta {
    char estado[30];
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, densidade2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Codigo: ");
    scanf(" %s", carta1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Codigo: ");
    scanf(" %s", carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calculo da densidade
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    // Comparacao de populacao
    if (carta1.populacao > carta2.populacao)
        printf("\nVencedor por Populacao: %s\n", carta1.cidade);
    else if (carta2.populacao > carta1.populacao)
        printf("\nVencedor por Populacao: %s\n", carta2.cidade);
    else
        printf("\nPopulacao: Empate!\n");

    // Comparacao de area
    if (carta1.area > carta2.area)
        printf("Vencedor por Area: %s\n", carta1.cidade);
    else if (carta2.area > carta1.area)
        printf("Vencedor por Area: %s\n", carta2.cidade);
    else
        printf("Area: Empate!\n");

    // Comparacao de PIB
    if (carta1.pib > carta2.pib)
        printf("Vencedor por PIB: %s\n", carta1.cidade);
    else if (carta2.pib > carta1.pib)
        printf("Vencedor por PIB: %s\n", carta2.cidade);
    else
        printf("PIB: Empate!\n");

    // Comparacao de pontos turisticos
    if (carta1.pontosTuristicos > carta2.pontosTuristicos)
        printf("Vencedor por Pontos Turisticos: %s\n", carta1.cidade);
    else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
        printf("Vencedor por Pontos Turisticos: %s\n", carta2.cidade);
    else
        printf("Pontos Turisticos: Empate!\n");

    // Comparacao de densidade populacional (MENOR vence)
    if (densidade1 < densidade2)
        printf("Vencedor por Densidade Populacional: %s\n", carta1.cidade);
    else if (densidade2 < densidade1)
        printf("Vencedor por Densidade Populacional: %s\n", carta2.cidade);
    else
        printf("Densidade Populacional: Empate!\n");

    return 0;
}
