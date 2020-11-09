#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int opcion;
	float c, b, a;
	printf ("Bienvenido, este programa te ayudara a hacer operaciones con dos numeros enteros o con decimales. Antes de seleccionar la operacion que deseas hacer, dame el primer numero:");
    scanf("%f", &a);
    printf ("Dame el segundo numero:");
    scanf("%f", &b);
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- Division:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Raiz:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
		c= a +b ;
		break;
	case 2: 
	    c= a -b; 
		break;
	case 3: 
	    c=a*b;
		break;
	case 4: 
	    c=a/b; 
		break;	
	case 5: 
	   c = pow(b, a); 
		break;
	case 6: 
	   c=sqrt(a); 
	   c=sqrt(b);
		break;	
	case 7: 
	    return 0; 
		break;			
	default:
		printf("No esta puesta correctamente la unidad\n");
		exit(0);
	}
	printf("\nEl resultado es %f \n", c);
} 
