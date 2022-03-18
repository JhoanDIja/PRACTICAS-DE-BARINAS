#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <dos.h>

void validacionFecha();
void fnZodiacal();
void fecha();
bool flag = true;
int year = 0, month =0 , day =0;
char ch [1];

int main(int argc, char *argv[]) {
	flag = true;
	fecha();
	validacionFecha();
	if (flag){
		fnZodiacal();
	}
	return 0;
}
void fecha(){
	ch [0]= (char)164;
	printf("Que a%co naciste? \n", putchar(ch[0]));
	scanf("%d", &year);
	printf("Que mes naciste? (del 1-12)\n");
	scanf("%d", &month);
	printf("Que dia naciste? \n");
	scanf("%d", &day);
	
	printf("%d",year);
	return;
}
void validacionFecha(){
	if ((year < 1900) || (day >31) || (month == 2 && day >30) || (month == 4 && day>30) || (month == 6 && day>30) ||( month == 9 && day>30)||(month ==11 && day> 30)){
		printf("fecha invalida");
		flag = false;
	}else {
		if(year %4==0 && year %100 !=0){
		printf("este es un a%co bisiesto \n",putchar(ch[0]));
	}else{
		printf("este no es un a%co bisiesto \n",putchar(ch[0]));
		}
	}
return;
	
}
void fnZodiacal(){
	ch [0]= (char)164;
	switch(month){
		case 1:
		if(day <= 20){
			printf("ERES CAPRICORNIO \n");
		}
		else if(day>=21)printf("ERES ACUARIO \n");
		printf("ESTAMOS EN INVIERNO");
		break;
		case 2:
		if (year % 4 ==0){
		if (day > 28 ){printf("fecha no valida");
				
			}else{
		printf("este es un bisiesto \n");
		if(day <= 18)
		printf("ERES ACUARIO \n");
		if(day>=19)printf("ERES PISCIS \n");
			printf("ESTAMOS EN INVIERNO");
			}
		}
		break;
		case 3:
		if(day <= 20){
		printf("ERES PISCIS \n");
		}
		else if(day>=21)printf("ERES ARIES \n");
		if(day>=20){
		printf("ESTAMOS EN PRIMAVERA \n");
		}else{printf("ESTAMOS EN PRIMAVERA \n");
		}
		break;
		
		case 4:
		if(day <= 20){
			printf("ERES ARIES \n");
		}
		else {
		printf("ERES TAURO \n");
		printf("ESTAMOS EN PRIMAVERA \n");
		}
		break;
		
		case 5:
		if(day <= 21){
			printf("ERES TAURO \n");
		}
		else {
		printf("ERES GEMINIS \n");
		}
		break;
		case 6:
		if(day <= 21){
			printf("ERES GEMINIS \n");
		}
		else{printf("ESTAMOS EN PRIMAVERA \n");
			printf("ESTAMOS EN VERANO \n");
		}
		break;
		case 7:
		if(day <= 22){
			printf("ERES CANCER \n");
		}
		else {
		printf("ERES LEO \n");
		printf("ESTAMOS EN VERANO \n");
		}
		break;
		case 8:
		if(day <= 23){
			printf("ERES LEO \n");
			printf("ESTAMOS EN PRIMAVERA \n");
		}
		else {
			printf("ERES VIRGO \n");
		}
		break;
		case 9:
		if(day <= 23){
			printf("ERES VIRGO \n");
			printf("ESTAMOS EN VERANO \n");
		}
		else {printf("ERES LIBRA \n");printf("ESTAMOS EN OTO%cO \n",putchar(ch[0]));}
		break;
		case 10:
		if(day <= 23){
			printf("ERES LIBRA \n");
		}
		else {printf("ERES ESCORPION \n");
		printf("ESTAMOS EN OTO%cO \n",putchar(ch[0]));
		}
		break;
		case 11:
		if(day <= 22){
			printf("ERES ESCORPION \n");
		}
		else {
			printf("ERES SAGITARIO \n");
		printf("ESTAMOS EN OTO%cO \n",putchar(ch[0]));
		}
		break;
		case 12:
		if(day <= 21){
			printf("ERES SAGITARIO \n");
			printf("ESTAMOS EN OTO%cO \n",putchar(ch[0]));
		}
		else {printf("ERES CAPRICORNIO \n");
		printf("ESTAMOS EN INVIERNO \n");}

		break;
		default: printf("Mes no existente \n");
		break;
	}
	return;
}

