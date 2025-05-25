#include <stdio.h>

int main() {
    //Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    

    //Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


        // Input de dados da carta1
printf("Insira os dados da carta1\n");
printf("Estado (de A a H)\n");
scanf("%c", &estado1);
//          estado inserido

printf("Insira o código da Carta (ex: A01): \n");
scanf("%s", &codigo1);
//         carta inserido

printf("Insira o nome da cidade:\n");
scanf("%s", &nomeCidade1);

//          Nome da cidade inserido

printf("Insira o numero populacional:\n");
scanf("%d", &populacao1);
//      população inserida

printf("Insira a area da cidade:\n");
scanf("%f", &area1);
//          area inserida

printf("Insira o PIB:\n");
scanf("%f",&pib1);
//          PIB inserido

printf("Insira os pontos Turisticos:\n");
scanf("%d", &pontosTuristicos1);



//              Inserindo a Carta 2
        // Input de dados da carta2
printf("Insira os dados da carta2\n");
printf("Estado (de A a H)\n");
scanf(" %c", &estado2);
//          estado 2 inserido 

printf("Insira o código da Carta2 (ex: A01): \n");
scanf("%s", &codigo2);
//         carta2 inserido

printf("Insira o nome da cidade:\n");
scanf("%s", &nomeCidade2);

//          Nome da cidade2 inserido

printf("Insira o numero populacional:\n");
scanf("%d", &populacao2);
//      população2 inserida

printf("Insira a area da cidade:\n");
scanf("%f", &area2);
//          area2 inserida

printf("Insira o PIB:\n");
scanf("%f",&pib2);
//          PIB2 inserido

printf("Insira os pontos Turisticos:\n");
scanf("%d", &pontosTuristicos2);





//      EXIBINDO A CARTA 1
printf("Carta 1\n");
printf(" Estado: %c\n", estado1);
printf("Código %s\n", codigo1);
printf(" Cidade %s\n", nomeCidade1);
printf(" População%d\n", populacao1);
printf("Area %f\n", area1);
printf("PIB: %f\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

//      EXIBINDO A CARTA 2

printf("Carta 2\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Area: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
