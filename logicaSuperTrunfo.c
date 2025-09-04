#include <stdio.h>
#include <string.h>

// Definição da struct para armazenar os atributos das cartas
typedef struct {
    char estado[50];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_populacional = carta1.populacao / carta1.area;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade_populacional = carta2.populacao / carta2.area;

    printf("\n=== Comparacoes ===\n");

    // População
    if (carta1.populacao > carta2.populacao)
        printf("Populacao: %s venceu\n", carta1.cidade);
    else if (carta2.populacao > carta1.populacao)
        printf("Populacao: %s venceu\n", carta2.cidade);
    else
        printf("Populacao: empate\n");

    // Área
    if (carta1.area > carta2.area)
        printf("Area: %s venceu\n", carta1.cidade);
    else if (carta2.area > carta1.area)
        printf("Area: %s venceu\n", carta2.cidade);
    else
        printf("Area: empate\n");

    // PIB
    if (carta1.pib > carta2.pib)
        printf("PIB: %s venceu\n", carta1.cidade);
    else if (carta2.pib > carta1.pib)
        printf("PIB: %s venceu\n", carta2.cidade);
    else
        printf("PIB: empate\n");

    // Pontos turísticos
    if (carta1.pontos_turisticos > carta2.pontos_turisticos)
        printf("Pontos turisticos: %s venceu\n", carta1.cidade);
    else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
        printf("Pontos turisticos: %s venceu\n", carta2.cidade);
    else
        printf("Pontos turisticos: empate\n");

    // Densidade populacional (menor valor vence)
    if (carta1.densidade_populacional < carta2.densidade_populacional)
        printf("Densidade populacional: %s venceu\n", carta1.cidade);
    else if (carta2.densidade_populacional < carta1.densidade_populacional)
        printf("Densidade populacional: %s venceu\n", carta2.cidade);
    else
        printf("Densidade populacional: empate\n");

    return 0;
}
