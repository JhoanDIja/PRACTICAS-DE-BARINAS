#include <stdio.h>
#include <stdlib.h>
void devuelta();
int main(){
	devuelta();
	return;
}

void devuelta(){
	int pago,devuelta, consumo, optimo,i = 1;
	printf("Cuanto consumio?");
	scanf("%d",&consumo);
	printf("Cuanto desea pagar?");
	scanf("%d",&pago);
	if(consumo>pago || pago < 0 || consumo <0)
	{
		printf("Valores invalidos, asegurese de pagar mas de lo que consume y no insertar valores negativos");		
	}
	else {
		devuelta =  pago-consumo;
		printf("La devuelta es %d \n", devuelta);
		printf("La manera mas optima de dar la devuelta es \n");
		while (devuelta >= 2000){
			devuelta-=2000;
			printf("%d Billetes de 2000 \n",i);
			i++;
		}
		while (devuelta >=1000 && devuelta <2000){
			i = 0;
			devuelta-=1000;
			i++;
			printf("%d Billetes de 1000 \n",i);
		}
		while (devuelta >= 500 && devuelta <1000){
			i = 0;
			devuelta-=500;
			i++;
			printf("%d Billetes de 500 \n",i);
		}
		while (devuelta >= 200 && devuelta <500){
			i = 0;
			devuelta-=200;
			i++;
			printf("%d Billetes de 200 \n",i);
		}
		while (devuelta >= 100 && devuelta <200){
			i = 0;
			devuelta-=100;
			i++;
			printf("%d Billetes de 100 \n",i);
		}
		while (devuelta >= 50 && devuelta <100){
			i = 0;
			devuelta-=50;
			i++;
			printf("%d Billetes de 50 \n",i);
		}
		while (devuelta >= 25 && devuelta <50){
			i = 0;
			devuelta-=25;
			i++;
			printf("%d Billetes de 25 \n",i);
		}
		
		while (devuelta >= 10 && devuelta <50){
			i = 0;
			devuelta-=10;
			i++;
			printf("%d Billetes de 10 \n",i);
		}
		while (devuelta >= 5 && devuelta <10){
			i = 0;
			devuelta-=5;
			i++;
			printf("%d Billetes de 5 \n",i);
		}
		while (devuelta >= 1 && devuelta <5){
			i = 0;
			devuelta-=1;
			i++;
			printf("%d Billetes de 1 \n",i);
		}
	}	
}
