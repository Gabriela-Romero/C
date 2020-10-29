#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
int r;
float l, a;
printf("Introduce radio (entero): ");
scanf("%d", &r);
l=PI*(r*2); 
a=pow(r,2)*PI;
printf("La longitud de la circunferencia vale %g\n", l);
printf("El area del calculo vale %g\n", a);
}

