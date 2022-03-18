#include <stdio.h>
#include <stdlib.h>

int fnPrimo (int);

int n, i, k, es_primo;
int primo =3;
void main()
{
	
	printf (" Cantidad de numeros a validar : ");
	scanf("%d",&n);
	for (k = 1; k <= n +1 ; k++, primo++)
	{
		if (fnPrimo(primo) == 1) 
		{
			printf (" %4d",primo); 
			printf ("\n");
		}
		primo++;
	}
	
	return;
}

int fnPrimo (int PN)
{
	es_primo = 1;
	

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
						if (i == 2) i++; else i += 2;
					}
				}
	}	
	return es_primo;
}
