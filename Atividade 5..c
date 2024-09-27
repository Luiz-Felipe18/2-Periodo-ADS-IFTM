#include<stdio.h>

 int main () {

  int preca, und;
  double valor, total1, total2, totalFinal;

  scanf("%d %d %lf", &preca, &und, &valor);

   total1 = und * valor;

  scanf("%d %d %lf", &preca, &und, &valor);

   total2 = und * valor;

   totalFinal = total1 + total2;

   printf ("%VALOR A PAGAR: R$%.2lf", totalFinal);
   return 0;

 }
