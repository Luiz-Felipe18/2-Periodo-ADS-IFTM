#include<stdio.h>
int main(){

    double l;
    int nota100,nota50,nota20,nota10,nota5,nota2,moeda1,moeda50,moeda25,moeda10,moeda5,Valor;
    scanf("%lf", &l);
    Valor = l *100;
    nota100 = Valor / 10000;
    Valor = Valor % 10000;
    nota50 = Valor / 5000;
    Valor = Valor % 5000;
    nota20 = Valor / 2000;
    Valor = Valor % 2000;
    nota10 = Valor / 1000;
    Valor = Valor % 1000;
    nota5 = Valor / 500;
    Valor = Valor % 500;
    nota2 = Valor / 200;
    Valor = Valor % 200;
    moeda1 = Valor / 100;
    Valor = Valor % 100;
    moeda50 = Valor / 50;
    Valor = Valor % 50;
    moeda25 = Valor / 25;
    Valor = Valor % 25;
    moeda10 = Valor / 10;
    Valor = Valor % 10;
    moeda5 = Valor / 5;
    Valor = Valor % 5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",nota100);
    printf("%d nota(s) de R$ 50.00\n",nota50);
    printf("%d nota(s) de R$ 20.00\n",nota20);
    printf("%d nota(s) de R$ 10.00\n",nota10);
    printf("%d nota(s) de R$ 5.00\n",nota5);
    printf("%d nota(s) de R$ 2.00\n",nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",moeda1);
    printf("%d moeda(s) de R$ 0.50\n",moeda50);
    printf("%d moeda(s) de R$ 0.25\n",moeda25);
    printf("%d moeda(s) de R$ 0.10\n",moeda10);
    printf("%d moeda(s) de R$ 0.05\n",moeda5);
    printf("%d moeda(s) de R$ 0.01\n",Valor);
 return 0;

}
