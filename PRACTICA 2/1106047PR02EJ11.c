#include <stdio.h>
#include <stdlib.h>
void fibonacciM();
int n = 0;
int m = 0;
int num1=0;
int num2=1;
int i,j=1;
int main(int argc, char *argv[]) {
	fibonacciM();
	return;
}

void fibonacciM()
{
	printf("Inserte la cantidad de multiplos a imprimir \n");
	scanf("%d", &n); 
	printf("Inserte el segundo numero \n");
	scanf("%d", &m);
	printf("\nLos multiplos son: \n");
	if((n>=1)&&(m>=2))
	{
		for(i = 0;i<n;)
		{
			
			int num3 = num2+num1;
			num1=num2;
			num2=num3;
			if (num3%m==0){
				printf("El multiplo es %d \n", num3);
				i++;
			}
		}
	}else printf("ERROR");
}

