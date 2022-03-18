#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Ponga un numero del 1 al 7 \n");
	int dias = 0;
	scanf("%d",&dias);
	switch (dias)
	{
		case 1:
			printf("Lunes");
			break;
		case 2:
			printf("Martes");
			break;
		case 3:
			printf("Miercoles");
			break;
		case 4:
			printf("Jueves");
			break;
		case 5:
			printf("viernes");
			break;
		case 6:
			printf("sabado");
			break;
		case 7: 
			printf("Domingo");
			default:
			printf("No esta en el rango de datos");
			break;
			
	}
	return 0;
}
