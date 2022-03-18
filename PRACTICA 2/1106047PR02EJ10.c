#include <stdlib.h>
#include <stdio.h>
void Fibonacci();
int num1 =0;
int num2 =1;
int i;
int length;
int s;
int main(){
	Fibonacci();
	return;
}

void Fibonacci(){
	
	
    printf("Introduzca un numero \n");
    scanf("%d", &s);
    if(s >=0){
		for(i = 0;;i++){
		int num3 = num2+num1;
			if(num3==s){
				printf("Si pertenece a la serie de fibonacci");
				break;
			}	
			num1=num2;
			num2=num3;
			if (i>s){
				printf("No pertenece a la serie fibonacci");
				 break;
			}	
		}
		}else printf("ERROR");
}

