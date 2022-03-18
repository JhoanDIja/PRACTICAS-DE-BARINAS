#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a,b,c;
int main(int argc, char *argv[]) {
	printf("Introduzca 3 valores:\n");
	scanf("%d%d%d", &a, &b,&c);
	if ((a<0)||(b<0)||(c<0)){
		printf("No se aceptan valores negativos");
	}
	else{
		if((a>=b)&&(a>=c))printf("Combinacion #1");
		if((b>=a)&&(b>=c))printf("Combinacion #2");
		if((c>=b)&&(c>=a))printf("Combinacion #3");
	}
	return 0;
}
