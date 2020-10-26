#include <stdio.h>
int main ()
 { 
float p, a, b, c;
printf ("Dame la medida del lado a de tu triangulo equilatero:");
scanf("%f", &a);
printf ("Dame la medida del lado b de tu triangulo equilatero:");
scanf("%f", &b);
printf ("Dame la medida del lado c de tu triangulo equilatero:");
scanf("%f", &c);
p=a+b+c;
printf("El perimetro del triangulo equilatero es: %f", p);
return 0;
} 
