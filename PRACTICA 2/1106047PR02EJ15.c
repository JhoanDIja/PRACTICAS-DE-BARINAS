#include <stdio.h>
#include <stdlib.h>

int i, n,factorial = 1;

int main (){   
    printf("Ingresa un número para calcular su factorial: \n");
    scanf("%d", &n);
    if(n<0 || n == 0){
    	printf("ERROR SOLO LOS ENTEROS POSITIVOS SON ADMITIDOS");
	}else{
		for (i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    printf("Factorial de %d es: %d\n", n, factorial);	
	}
    return;
}





/* n = n+123;
n +=123;


for(inicializacion;condicion;incremento)
*/
