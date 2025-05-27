#include <stdio.h>

int main(){

    //carta 01
    char estado1[10] = "SP";
    char codigo1[10] = "A01";
    char nomeCidade1[50] = "Sorocaba";
    unsigned long int populacao1 = 723682;
    double area1 = 449.872;
    double pib1 = 172.900;
    int pontosTuristicos1 = 15;
    double densidadePopulacional1; 
    double pibPerCapita1;
    double superPoder1;

    //cálulo 01
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    //cálculo 01A
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPerCapita1;

    //carta 02
    char estado2[10] = "RJ";
    char codigo2[10] = "B02";
    char nomeCidade2[50] = "Niteroi";
    unsigned long int populacao2 = 515317;
    double area2 = 133.916;
    double pib2 = 50.700;
    int pontosTuristicos2 = 10;
    double densidadePopulacional2;
    double pibPerCapita2;
    double superPoder2;
  
    //cálulo 02
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    //cálculo 02A
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;

    // Exibindo carta 1
    printf("\n--- Carta 1 ---\n");
    printf("estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2lf bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
  
    // Exibindo carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.2lf bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações com resultado 1 (verdadeiro) ou 0 (falso)
    printf("\n--- comparação de cartas ---\n");
    
    printf("Populacao 1 > 2: %s\n", (populacao1 > populacao2)? "carta1 vence" : "carta2 vence");
    printf("Area 1 > 2: %s\n", (area1 > area2)? "carta1 vence" : "carta2 vence");
    printf("PIB 1 > 2: %s\n", (pib1 > pib2)? "carta1 vence" : "carta2 vence");
    printf("Densidade Populacional 1 > 2: %s\n", (densidadePopulacional1 > densidadePopulacional2)? "carta1 vence" : "carta2 vence");
    printf("PIB per Capita 1 > 2: %s\n", (pibPerCapita1 > pibPerCapita2)? "carta1 vence" : "carta2 vence");
    printf("Pontos Turisticos 1 > 2: %s\n", (pontosTuristicos1 > pontosTuristicos2)? "carta1 vence" : "carta2 vence");
    printf("Super Poder 1 > 2: %s\n", (superPoder1 > superPoder2)? "carta1 vence" : "carta2 vence");

   
    return 0;

 }