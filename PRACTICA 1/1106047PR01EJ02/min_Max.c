#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maxMin();

int main(int argc, char *argv[]) {
	maxMin();
	return 0;
}

int maxMin(){
	printf("Digite tres numeros: \n");
	int num= 0;
	scanf("%d", &num);
	
	int min = num, max=num;
	int i;
	for(i =1; i<=2; i++){
		scanf("%d", &num);
		min = (num<min)? num : min;
		max = (num > max)? num: max;
	}
	printf("El minimo es: %d, maximo es: %d", min, max);
	return 0;
}
