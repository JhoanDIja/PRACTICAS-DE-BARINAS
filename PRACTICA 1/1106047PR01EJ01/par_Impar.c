#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int checker()
{
	int a = 0, ch;
	for(;;)
	{
		ch = getche();
		if (ch >=48 && ch<= 57)
		{
			printf("%c", ch);
			a = a * 10 + (ch-48);
		}
		if (ch ==13)
		{
			break;
		}
		return a;
	}
}

int main(int argc, char *argv[]) {
	int a = 0;
	a = checker();
	printf("ESTE PROGRAMA ADMITE NUMEROS POSITIVOS Y NEGATIVOS Y VERIFICA SI SON PAR O IMPAR \n");
	printf("Digite un numero: %d",a);
	
		if((a>=0) && (a % 2 == 0))
		{
		printf("El numero es par y es positivo");
		}
		else if ((a>=0) && (a % 2 != 0))
		{
		printf("El numero es positivo pero a la vez es impar");
		}
	
		else if((a<=0) && (a % 2 == 0)){
		printf("El numero es negativo y a la vez es par");
		}
		else 
		{
		printf("El numero es negativo y a la vez es impar");
		}
		
	return 0;
}
