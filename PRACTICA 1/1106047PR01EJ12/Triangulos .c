#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void fnCapturaValores();
void fnValidarDatos();
void fnValidarLados();
void fnAngulos();
void fnClasificacionAngular();
void fnClasificacionLateral();
const double PI =  3.1415926;
float a,b,c;
bool on = true;
float angA, angB, angC; 
int main(int argc, char *argv[]) {
	on =true;
	fnCapturaValores();
	fnValidarDatos();
	fnValidarLados();
	if (on)
	{
		printf("Entraste en el calculo del area \n \n");
		float pem = (a+b+c);
		float sPerimetro = pem/2;
		float area = sqrt(sPerimetro*(sPerimetro-a)*(sPerimetro-b)*(sPerimetro-c));
		printf("El area del triangulo es: %5.1f \n",area);
		fnAngulos();
		fnClasificacionAngular();
		fnClasificacionLateral();
	}	
	return;
}
void fnCapturaValores()
{
	printf("Valor de lado 1 \n");
	scanf("%f", &a);
	printf("Valor de lado 2 \n");
	scanf("%f", &b);
	printf("Valor de lado 3 \n");
	scanf("%f", &c);
	return;
}
void fnValidarDatos()
{
	if ((a<=0) || (b<=0)|| (c<=0))
	{
	printf("Incongruencia en los datos");
	on = false;
	}
	return;
	
}
void fnValidarLados()
{
	if ((a>= (b+c))||(b>= (a+c))||(c>= (b+a))) 
	{
	printf("Los lados no conforman un triangulo");
	on = false;
	}
	return;
}
void fnAngulos(){
	angA = acosf((pow(b,2)+pow(c,2) - pow(a,2))/(2*b*c))*180/PI;
	angB = acosf((pow(a,2)+pow(c,2) - pow(b,2))/(2*a*c))*180/PI;
	angC = acosf((pow(a,2)+pow(b,2) - pow(c,2))/(2*a*b))*180/PI;
	printf("El angulo A es %0.1f \n \n El angulo de B es%0.1f \n \n El angulo de C es%0.1f \n \n", angA,angB,angC);
}
void fnClasificacionAngular(){
	printf("CLASIFICACION DE ANGULOS \n \n");
	if((angA > 0)&&(angA < 90)){
		printf("Este angulo es agudo: %0.2f \n \n", angA);
	}else{
		if(angA == 90)printf("Este angulo es recto: %0.1f \n \n", angA);
		if((angA>90)&&(angA<180))printf("Este angulo es obtuso: %0.1f \n \n");
	}
	if((angB > 0)&&(angB < 90)){
		printf("Este angulo es agudo: %0.1f \n", angB);
	}else{
		if(angB == 90)printf("Este angulo es recto: %0.1f \n", angB);
		if((angB>90)&&(angB<180))printf("Este angulo es obtuso: %0.1f \n", angB);
	}
	if((angC > 0)&&(angC < 90)){
		printf("Este angulo es agudo: %0.1f \n", angA);
	}else{
		if(angC == 90)printf("Este angulo es recto: %0.1f \n", angC);
		if((angC>90)&&(angC<180))printf("Este angulo es obtuso: %0.1f \n",angC);
	}
	return;
}
void fnClasificacionLateral(){
	printf("CLASIFICACION SEGUN SUS LADOS\n");
	if((angA==angB)&&(angA == angC)){
		printf("El triangulo es Equilatero");
	}else {
		if((angA,angB,angC>0)&&(angA,angB,angC < 90))printf("El triangulo es Escaleno");
		if((angA > 90)||(angB>90)||(angC>90))printf("El triangulo es Isosceles");
	}
	return;
}

