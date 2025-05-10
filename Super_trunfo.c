#include <stdio.h>

int main(){
    //carta 01
    char estado1[10] = "SP";
    char codigo1[10] = "A01";
    char nomeCidade1[50] = "Sorocaba";
    int populacao1 = 723682;
    double area1 = 449872;
    double pib1 = 172.900;
    int pontosTuristicos1 = 15;

    //carta 02
    char estado2[10] = "RJ";
    char codigo2[10] = "B02";
    char nomeCidade2[50] = "Niteroi";
    int populacao2 = 515317;
    double area2 = 133916;
    double pib2 = 50.700;
    int pontosTuristicos2 = 10;

    // Exibindo carta 1
    printf("\n--- Carta 1 ---\n");
    printf("estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2lf bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibindo carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.2lf bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;

 }