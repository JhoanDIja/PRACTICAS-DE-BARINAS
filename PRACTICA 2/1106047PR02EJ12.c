#include <stdlib.h>
#include <stdio.h>

void esPrimo();
int n,i = 2,flag = 1;

int main(){
	esPrimo();
	return;
}

void esPrimo()
{
	printf("Inserte un numero \n");
	scanf("%d",&n);
	if(n == 1 || n ==2 || n == 3){
	printf ("EL NUMERO ES PRIMO");
	}else if (n>=3)
	{
		for(i;i<=(n/2);i++)
		{
			if((n % i ) == 0)
			{
				printf ("NO ES PRIMO");
				flag = 0;
			}
			else printf ("ES PRIMO");
		}	
	}
//	if (flag == 1) printf ("EL NUMERO ES PRIMO"); 
	return;
}
