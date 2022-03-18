#include <stdlib.h>
#include <stdio.h>
void iteracionFor();
void iteracionWhile();
void iteracionDoWhile();
int num;
int i;
int sum;
int s = 0;
char oracion[] = "La sumatoria de los numeros del 1 al 100 es ";
int main(){
	printf("Elija un ciclo: \n");
	int choice;
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
	
	for(i = 1;i<=100;i++){
	s = s+i;
	printf("La sumatoria de \n %d\n",s);
	
	}
}
void iteracionWhile(){
	printf("%s",oracion);
	i += i;
	while(i<=100){
	s = s+i;
	printf("La sumatoria de \n %d\n",s);
	i++;
	}
}
void iteracionDoWhile(){
	do{
	s = s+i;
	printf("La sumatoria de \n %d\n",s);
	i++;
	}while(i<=100);
	}
