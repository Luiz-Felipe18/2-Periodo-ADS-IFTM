#include<stdio.h>

 int main () {

  int HoraInicio, MinutoInicio, HoraFinal, MinutoFinal, Tempo;

  scanf ("%d %d %d %d", &HoraInicio, &MinutoInicio, &HoraFinal, &MinutoFinal);

   Tempo = ((HoraFinal*60)+MinutoFinal)- ((HoraInicio*60)+MinutoInicio);

  if (Tempo<=0)
  {
    Tempo = Tempo + (24*60);
  }
  printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", Tempo/60, Tempo%60);

     return 0;



 }
