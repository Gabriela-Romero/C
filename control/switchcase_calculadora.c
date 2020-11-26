#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	int opcion, i;
	int fact = 1;
	float resultado, n1, n2;
	do{
	printf("\n Elige una opcion:\n");
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Division\n");
	printf("\t 4.- Multiplicacion\n");
	printf("\t 5.- Potencia\n");
	printf("\t 6.- Raiz cuadrada\n");
	printf("\t 7.- Factorial\n");
	printf("\t 8.- Salir\n");
	scanf("%d",&opcion);
	system("cls");
	
	switch(opcion)
	{
	case 1:
		printf("Introduce el primer numero:");
		scanf("%d",&n1);
		printf("Introduce el segundo numero:");
		scanf("%d",&n2);
		resultado = n1 + n2;
		printf("%f", resultado);
		break;
	case 2:
		printf("Introduce el primer numero:");
		scanf("%d",&n1);
		printf("Introduce el segundo numero:");
		scanf("%d",&n2);
		resultado = n1 - n2;
		printf("%f", resultado);
		break;
	case 3: 
	printf("Introduce el primer numero:");
		scanf("%d",&n1);
		printf("Introduce el segundo numero:");
		scanf("%d",&n2);
		if(n2==0)
		{
			printf("La operacion entre 0 no esta definida");
		}
		else{
		resultado = n1 / n2;
		printf("%f", resultado);
		}
		break;
	case 4: 
	printf("Introduce el primer numero:");
		scanf("%d",&n1);
		printf("Introduce el segundo numero:");
		scanf("%d",&n2);
		resultado = n1 * n2;
		printf("%f", resultado);
		break;
	case 5: 
		printf("Introduce el primer numero:");
		scanf("%d",&n1);
		printf("Introduce el segundo numero:");
		scanf("%d",&n2);
		resultado = pow(n1,n2);
		printf("%f", resultado);
		break;
	case 6: 
	printf("Introduce el numero:");
		scanf("%d",&n1);
		if(n1<0){
				printf("No esta definida");
		}
		else{
			resultado = sqrt(n1);
			printf("%f", resultado);
		}
		break;
	case 7: 
	printf("Introduce el numero:");
		scanf("%d",&n1);
		if(n1<0) {fact = 0;}
		else if (n1 == 0 ) {fact = 0;}
		else {
		for (i= 1; i <= n1; i++){
			fact = fact*i;
			}
			}
	printf("%f", resultado);
		break;
	case 8:
	return 0;
	break;
	default:
		printf("Salir");
		exit(0);
		}	
	} while (opcion<=8);
		}	
		

