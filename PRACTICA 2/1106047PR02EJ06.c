#include <stdio.h>
#include <stdlib.h>
int i;
void invertido();
int num;
int inver;
int main(){
	invertido();
	return;
}

void invertido(){
	printf("Que numero quieres mostrar invertido");
	scanf("%d", &num);
	while (num > 0){
	int fDigito = num % 10;
	inver = (inver * 10) + fDigito;
	num= num/10;
}
	printf("El numero invertido es: %d", inver);
}
