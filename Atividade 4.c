#include<stdio.h>
#define PESO1 3.5
#define PESO2 7.5
 int main () {
  double A, B, MEDIA, SOMA;
  scanf ("%lf", &A);
  scanf ("%lf", &B);
  SOMA = A * PESO1 + B * PESO2;
  MEDIA = SOMA / (PESO1 + PESO2);
   printf ("MEDIA = %.5lf", MEDIA);
   printf ("\n");
   return 0;

 }
