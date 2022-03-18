#include <stdlib.h>
#include <stdio.h>

void MCM();

int i;
int num1;
int num2;
int main(){
	MCM();
}

void MCM(){
	int num1, num2;
printf("Introduzca el primer numero \n");
scanf("%d",&num1);
printf("Introduzca el segundo numero \n");
scanf("%d",&num2);
int m = num1*num2;
while(num1!=num2){
if (num1>num2)
{
num1=num1-num2;
}
else
{
num2=num2-num1;
}
}
	int M =num1;
	printf("El MCD es %d \n",M);	
	int mincmul = m/M;
	printf("El mcm es %d", mincmul);

}
