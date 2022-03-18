#include <stdio.h>
#include <stdlib.h>

char ch;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Introduzca uno vocal: ");
	scanf("%c", &ch);
	
	if((ch == 'a')|| (ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')||(ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'O')||(ch == 'U')){
		printf("Es una vocal");
	}else{
		printf("No es una vocal");
	}
	return 0;
}
