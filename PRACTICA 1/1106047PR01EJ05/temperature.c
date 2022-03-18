#include <stdio.h>
#include <stdlib.h>
float celsius;

 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Cual es la temperatura actual en celsius? ");
	scanf("%f", &celsius);
	float farenheit = celsius * 1.8 + 32;
	printf("La temperatura actual en farenheit es: %f", farenheit);
	return 0;
}
