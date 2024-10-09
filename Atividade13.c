#include<stdio.h>
 int main() {

   double valor, reajuste=0.0, salario=0.0;

   scanf ("%lf", &valor);

   if (valor >= 0.0 && valor <= 400.0)
   {

       reajuste = valor * 0.15;
       salario = valor + reajuste;
       printf ("Novo salario: %.2lf\n", salario);
       printf ("Reajuste ganho: %.2lf\n", reajuste);
       printf ("Em percentual: 15 %%\n");

   }
    else if (valor >= 400.01 && valor <= 800.00)
   {
       reajuste = valor * 0.12;
       salario = valor + reajuste;
       printf ("Novo salario: %.2lf", salario);
       printf ("\n Reajuste ganho: %.2lf", reajuste);
       printf ("\n Em percentual: 12 %%");
   }
    else if ( valor >= 800.01 && valor <= 1200.00)
   {
       reajuste = valor * 0.10;
       salario = valor + reajuste;
       printf ("Novo salario: %.2lf", salario);
       printf ("\n Reajuste ganho: %.2lf", reajuste);
       printf ("\n Em percentual: 10 %%");
   }
   else if ( valor >= 1200.01 && valor <= 2000.00)
   {
       reajuste = valor * 0.07;
       salario = valor + reajuste;
       printf ("Novo salario: %.2lf", salario);
       printf ("\n Reajuste ganho: %.2lf", reajuste);
       printf ("\n Em percentual: 7 %%");
   }
   else if ( valor >= 2000.01)
   {
       reajuste = valor * 0.04;
       salario = valor + reajuste;
       printf ("Novo salario: %.2lf", salario);
       printf ("\n Reajuste ganho: %.2lf", reajuste);
       printf ("\n Em percentual: 42 %%");
   }
    return 0;
}
