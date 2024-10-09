#include<stdio.h>
#include<math.h>

 int main () {

   double A, B, C, Perimetro, Area;

   scanf ("%lf\n%lf\n%lf", &A, &B, &C);

   if (A + B > C && A + C > B && B + C > A)
   {
     Perimetro = A + B + C;

     printf ("Perimetro = %.1lf", Perimetro);
   }
   else
   {
       Area = C*(A+B)/2;

        printf ("Area = %.1lf", Area);
   }
   printf ("\n");
   return 0;

 }
