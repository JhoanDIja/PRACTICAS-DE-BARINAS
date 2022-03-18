#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	multiplos();
	return 0;
}
int multiplos(){
	printf("Digite un numero: \n");
	int num= 0;
	scanf("%d", &num);
	if((num %2 != 0)&&(num %3 != 0)&&(num %5 != 0)&&(num %7 != 0)){
		printf("este numero no es multiplo de ninguno de estos");
	}else{
		if(num %2 ==0){
		printf("el numero es multiplo de 2 \n");
		}
		if(num % 3 ==0){
		printf("el numero es multiplo de 3\n");
		}
		if(num % 5 ==0){
		printf("el numero es multiplo de 5\n");
		}
		if(num % 7 ==0){
		printf("el numero es multiplo de 7\n");
		}
	}
	return 0;
}
