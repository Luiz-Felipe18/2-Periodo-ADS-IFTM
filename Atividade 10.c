#include<stdio.h>
 int main() {

  int A, B, C;

  scanf ("%d", &A);
  scanf ("%d", &B);
  scanf ("%d", &C);

   if (A > B && A > C)
   {
       if(B>C){
        printf ("%d\n%d\n%d", C, B, A);
       }
       else
        printf ("%d\n%d\n%d", B, C, A);

   }
   else if (B > C && B > A)
   {
        if(A>C){
        printf ("%d\n%d\n%d", C, A, B);
       }
       else
        printf ("%d\n%d\n%d", A, C, B);

   }
   else if (C > A  && C > B)
   {
        if(B>A){
        printf ("%d\n%d\n%d", A, B, C);
       }
       else
        printf ("%d\n%d\n%d", B, A, C);

   }

   printf ("\n");
   printf("\n%d\n%d\n%d", A, B, C);
   printf ("\n");
   return 0;



 }
