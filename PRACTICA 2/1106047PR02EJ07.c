#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//MCD
//#define GENERIC_MAX(x, y) ((x) > (y) ? (x) : (y))
//
//#define ENSURE_int(i)   _Generic((i), int:   (i))
//#define ENSURE_float(f) _Generic((f), float: (f))
//
//
//#define MAX(type, x, y) \
//(type)GENERIC_MAX(ENSURE_##type(x), ENSURE_##type(y))
//USAGE
//MAX(int, 2, 3)

void MCD3();

int main(){
	MCD3();
	return;
}
void MCD3(){
int num1, num2;
printf("Introduzca el primer numero");
scanf("%d",&num1);
printf("Introduzca el segundo numero");
scanf("%d",&num2);
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
printf("El MCD es %d",M);
}

