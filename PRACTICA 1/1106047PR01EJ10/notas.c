#include <stdio.h>
#include <stdlib.h>

float grade;
int choice;
int main(int argc, char *argv[]) {
	printf("Que asignatura deseas calificar? \n");
	printf("1) Fisica Mecanica \n 2) LAB FISICA MECANICA \n 3) Calc. Integral \n");
	printf("4) PROGRAMA HANDS ON 1 \n 5) Dibujo Mecanico I \n 6) PyD de Algoritmos \n");
	scanf("%d",&choice);
	
	switch (choice){case 1:
		fnGrades();
	break;
	case 2:
		fnGrades();
		break;
	case 3:
		fnGrades();
		break;
	case 4:
		fnGrades();
		break;
	case 5:
		fnGrades();
		break;
	case 6:
		fnGrades();
		break;
	default:
		printf("No esta en el rango");
		break;
	
	}
	return 0;
}
fnGrades(){
	printf("Que calificacion quieres otorgar? :");
		scanf("%f", &grade);
		if(grade < 0){
			printf("Aunque el estudiante se lo merezca no le podemos dar notas negativas");
		}else{
			if(grade > 100){
				printf("Tampoco le puedes dar una nota mas alta que 100 aunque lo merezca");
			}else{
				if (grade >= 90){
					printf("La nota otorgada equivale a una A \n Puntos acumulados en el trimestre: 4");
				}
				else if ((grade>= 85)&&(grade <= 89)){
					printf("La nota Otorgada equivale a B+ \n Puntos acumulados en el trimestre: 3.5");
				}
				else if ((grade>= 80)&&(grade <= 84)){
					printf("La nota Otorgada equivale a B \n Puntos acumulados en el trimestre: 3");
				}
				else if ((grade>= 75)&&(grade <= 79)){
					printf("La nota Otorgada equivale a C+ \n Puntos acumulados en el trimestre: 2.5");
				}
				else if ((grade>= 70)&&(grade <= 74)){
					printf("La nota Otorgada equivale a C \n Puntos acumulados en el trimestre: 2");
				}
			}
		}
}
