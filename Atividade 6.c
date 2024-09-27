#include<stdio.h>
#include<math.h>
#define PI 3.14159

 int main () {

    int raio;

    scanf ("%d", &raio);

    double volume = 4.0/3.0*PI * pow(raio, 3);

    printf ("VOLUME = %.3lf", volume);

    printf ("\n");

    return 0;

 }
