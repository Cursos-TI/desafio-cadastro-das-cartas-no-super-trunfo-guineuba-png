#include <stdio.h>

int main() {
    char cidade1[50], cidade2[50];
    unsigned long int pop1, pop2;   // população pode ser bem grande
    float area1, area2, pib1, pib2;
    int tur1, tur2;

    // Entrada Carta 1
    printf("Carta 1 - Cidade: ");
    scanf(" %d \n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &pop1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &tur1);

    // Entrada Carta 2
    printf("\nCarta 2 - Cidade: ");
    scanf(" %d \n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &pop2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &tur2);

    // Calculos
    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;
    float pibCap1 = (pib1 * 1000000000.0) / pop1;
    float pibCap2 = (pib2 * 1000000000.0) / pop2;
    float super1 = (float)pop1 + area1 + pib1 + tur1 + pibCap1 + (1.0 / dens1);
    float super2 = (float)pop2 + area2 + pib2 + tur2 + pibCap2 + (1.0 / dens2);

    // Comparacoes (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    printf("\n--- Comparacoes ---\n");
    printf("Populacao: %d\n", pop1 > pop2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Turisticos: %d\n", tur1 > tur2);
    printf("PIB per capita: %d\n", pibCap1 > pibCap2);
    printf("Densidade (menor vence): %d\n", dens1 < dens2);
    printf("Super Poder: %d\n", super1 > super2);

    return 0;
}