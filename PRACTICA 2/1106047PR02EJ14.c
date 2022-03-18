#include <stdio.h>
#include <stdlib.h>

int fnPrimo (int);

int n, i, k=3, es_primo,j,y=5;

void main()
{	
	printf (" Cantidad de numeros a validar : "); 
	scanf("%d",&n);
	for(j= 1;j<=n;k++,y++)
				{
					if ((fnPrimo(k) == 1) && (fnPrimo(y)) ==1) 
						{
							printf ("DUPLA #%d - %d,%d \n",j,k,y); 
							j++;		
						}		
				}
		
	return;
}

int fnPrimo (int PN)
{
	es_primo = 1;
	i        = 2;

	switch (PN)
	{
		case 1:
		case 2:
		case 3: { es_primo = 1;	break;}
		default:
				{
					i = 2;
					while ((i <= (PN/2)) && (es_primo == 1))
					{
						es_primo = !((PN % i ) == 0);
						if (i == 2) i++;
						else i += 2;
						
					}
				}
	}	
	return es_primo;
}
