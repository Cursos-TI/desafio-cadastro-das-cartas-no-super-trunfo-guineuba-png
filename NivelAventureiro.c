#include <stdio.h>

int main() {
    char cidade1[50], cidade2[50];
    long int pop1, pop2;
    float area1, area2, pib1, pib2;

    // Carta 1
    printf("Cidade 1: "); scanf(" %[^\n]", cidade1);
    printf("Populacao: "); scanf("%ld", &pop1);
    printf("Area (km²): "); scanf("%f", &area1);
    printf("PIB (bilhoes): "); scanf("%f", &pib1);

    // Carta 2
    printf("\nCidade 2: "); scanf(" %[^\n]", cidade2);
    printf("Populacao: "); scanf("%ld", &pop2);
    printf("Area (km²): "); scanf("%f", &area2);
    printf("PIB (bilhoes): "); scanf("%f", &pib2);

    // Calculos
    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;
    float pibCap1 = (pib1 * 1000000000) / pop1;
    float pibCap2 = (pib2 * 1000000000) / pop2;

    // Resultados
    printf("\n--- Resultados ---\n");
    printf("%s: Densidade = %.2f | PIB per capita = %.2f\n", cidade1, dens1, pibCap1);
    printf("%s: Densidade = %.2f | PIB per capita = %.2f\n", cidade2, dens2, pibCap2);

    return 0;
}
