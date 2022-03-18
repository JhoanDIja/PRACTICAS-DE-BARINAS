#include <stdlib.h>
#include <stdio.h>
void Fibonacci();
int num1 =0;
int num2 =1;
int i;
int sum;
int s = 0;
int length;
int main(){
	Fibonacci();
	return;
}

void Fibonacci(){
	
	
    printf("Introduzca la cantidad de valores a ingresar \n");
    scanf("%d", &length);
    if(length >1){
	    printf("La serie de fubonacci es: \n");
		printf("%d \n%d \n", num1,num2);
	    length-=1;
		for(i = 0;i<=length;i++){
		int num3 = num2+num1;
		printf("%d \n",num3);
		num1=num2;
		num2=num3;
		}
	}else printf("ERROR");
}

