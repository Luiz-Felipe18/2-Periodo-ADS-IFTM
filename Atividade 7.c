#include<stdio.h>

 int main () {

  int Diasatuais, Ano, Meses, Dias;

   scanf ("%d", &Diasatuais);

   Ano = Diasatuais/365;
   Diasatuais = Diasatuais % 365;
   Meses = Diasatuais/30;
   Diasatuais = Diasatuais % 30;
   Dias = Diasatuais;

   printf ("%d ano(s)\n", Ano);
   printf ("%d meses(s)\n", Meses);
   printf ("%d dias(s)\n", Dias);
   return 0;
 }
