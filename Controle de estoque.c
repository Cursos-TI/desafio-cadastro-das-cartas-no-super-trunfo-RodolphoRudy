#include <stdio.h>

int main () {
   //declarar variaveis produto, u i estoque, double valor unitario, double valor total e
   //u i quantidade minima
   char produtoA[30] = "produtoA";
   char produtoB[30] = "produtoB";

   unsigned int estoqueA = 1000;
   unsigned int estoqueB = 2000;

   float valorA = 10.50;
   float valorB = 20.40;

   unsigned int estoqueMinimoA = 500;
   unsigned int estoqueMinimoB = 2500;

   double valorTotalA;
   double valorTotalB;

   int resultadoA, resultadoB;

   //Exibir as informacoes do produto
   printf("produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
   printf("produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);

   //Comparacao com o valor minimo de estoque
   resultadoA = estoqueA > estoqueMinimoA;
   resultadoB = estoqueB > estoqueMinimoB;

   printf("o produto %s tem estoque minimo %d\n", produtoA, resultadoA);
   printf("o produto %s tem estoque minimo %d\n", produtoB, resultadoB);

   //Comparacao entre valores minimos de estoque
   printf("o valor total de A (R$ %.2f) é maior que o valor total de B (R$%.2f)? %d\n", 
                                         estoqueA * valorA,
                                         estoqueB * valorB,
                                         (estoqueA * valorA) > (estoqueB * valorB));







    return 0;


}