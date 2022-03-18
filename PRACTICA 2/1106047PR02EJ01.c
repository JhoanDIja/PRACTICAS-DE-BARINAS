#include <stdlib.h>
#include <stdio.h>
void iteracionFor();
void iteracionWhile();
void iteracionDoWhile();
int num;
int i;
char oracion[] = "La tabla de este numero multiplicar hasta el 20 es \n";
int main(){
	printf("Digite un numero: ");
	scanf("%d",&num);
	int choice;
	printf("Que ciclo quieres usar? \n");
	printf("1) For \n 2) While \n 3) Do While \n");
	scanf("%d", &choice);
	system("cls");
	switch(choice){
		case 1: 
		iteracionFor();
		break;
		case 2: 
		iteracionWhile();
		break;
		case 3: 
		iteracionDoWhile();
		break;
	}
	return;
}

void iteracionFor(){
	printf("%s", oracion);
	for(i = 1;i<=20;i++){
	int mul = i*num;
	printf("%d \n",mul);
	}
}
void iteracionWhile(){
	printf("%s",oracion);
	i =1;
	while(i<=20){
	int mul = i*num;
	printf("%d \n",mul);
	i++;
	}
}
void iteracionDoWhile(){
	do{
	int mul = i*num;
	printf("%d \n",mul);
	i++;
	}while(i<=20);
	}
