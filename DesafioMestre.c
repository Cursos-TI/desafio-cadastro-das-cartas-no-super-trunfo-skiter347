#include <stdio.h>

int main() {
    //Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[20];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

            // variaveis inseridas da carta1

    //Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[20];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    

    // Input de dados da carta1
    printf("Insira os dados da carta1\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

     // Densidade populacional inserido

    float densidadePopulacional1 = populacao1 / area1;
    float PIBpercapita1 = pib1 / populacao1;

    // Input de dados da carta2

    printf("\nInsira os dados da carta2\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta2 (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

        // Densidade populacional inserido

    float densidadePopulacional2 = populacao2 / area2;
    float PIBpercapita2 = pib2 / populacao2;

    // EXIBINDO A CARTA 1

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.3f\n", densidadePopulacional1);
    printf("PIB per capita: %.3f\n", PIBpercapita1);

    // EXIBINDO A CARTA 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.3f\n", densidadePopulacional2);
    printf("PIB per capita: %.3f\n", PIBpercapita2);

                    //Comparação

                    


 printf("O estado 1 (%lu) vence o estado 2 (%lu) em população? %s\n",
           populacao1, populacao2, (populacao1 > populacao2) ? "Sim" : "Não");

    printf("O estado 1 (%.2f) vence o estado 2 (%.2f) em área? %s\n",
           area1, area2, (area1 > area2) ? "Sim" : "Não");

    printf("O estado 1 (%.2f) vence o estado 2 (%.2f) em PIB? %s\n",
           pib1, pib2, (pib1 > pib2) ? "Sim" : "Não");

    printf("O estado 1 (%d) vence o estado 2 (%d) em pontos turísticos? %s\n",
           pontosTuristicos1, pontosTuristicos2, (pontosTuristicos1 > pontosTuristicos2) ? "Sim" : "Não");

    printf("O estado 1 (%.3f) vence o estado 2 (%.3f) em densidade populacional? %s\n",
           densidadePopulacional1, densidadePopulacional2, (densidadePopulacional1 > densidadePopulacional2) ? "Sim" : "Não");


    // Cálculo do “superpoder”
    float poder1 = PIBpercapita1 + pontosTuristicos1 + pib1 + area1 + populacao1 + densidadePopulacional1;
    float poder2 = PIBpercapita2 + pontosTuristicos2 + pib2 + area2 + populacao2 + densidadePopulacional2;

            // por algum motivo, os boleanos não imprimiam resultado e tive que consultar recursos na internet

    //printf("O super poder do estado 1 perde o estado 2 ?\n %s",poder1 > poder2);




printf("O superpoder do estado 1 é: %.3f\n", poder1);
printf("O superpoder do estado 2 é: %.3f\n", poder2);
printf("O superpoder do estado 1 vence o estado 2? %s\n");




    return 0;
}