#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
const dolar = 56.4, euro = 63.8, yen =0.5;
float peso;
int moneda;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("ESTE PROGRAMA SOLO ADMITE TRES TIPOS DE MONEDAS: \n 1) DOLARES \n 2) EUROS \n 3) YENES");
	printf("\n Que moneda quieres convertir? ");
	scanf("%d", &moneda);
	fnConver();	
	return;
}

fnConver(){
	switch (moneda)
	{
		case 1:
			printf("Cuantos pesos quieres convertir? \n");
			scanf("%f", &peso);
			if((peso <= 0)||(peso == 0)){
				printf("valor invalido");
			}else{
			peso = peso * dolar;
			printf("Usted tiene un total de %0.1f dolares", peso);
			}
			break;
		case 2:
			printf("Cuantos pesos quieres convertir? \n");
			scanf("%f", &peso);
			if((peso <= 0)||(peso == 0)){
			printf("valor invalido");
			}else{
			peso = peso * euro;
			printf("Usted tiene un total de %0.1f dolares", peso);
			}
			break;
		case 3:
			printf("Cuantos pesos quieres convertir? \n");
			scanf("%f", &peso);
			if((peso <= 0)||(peso == 0)){
			printf("valor invalido");
			}else{
			peso = peso * yen;
			printf("Usted tiene un total de %0.1f dolares", peso);
			}
			break;
			
			default:
			printf("La moneda escrita no esta en el rango de conversiones");
			break;
			
	}
	return;
}
