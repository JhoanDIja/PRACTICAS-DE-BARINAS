#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminante, raiz1, raiz2, real, imag;
    printf("introduzca los coeficientes a, b y c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminante = pow(b,2) - 4 * a * c;
if(a == 0){
	printf("El coeficiente 'A' no puede valer 0");
}else{
	if (discriminante> 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("PRIMERA RAIZ = %.2lf y 2DA = %.2lf", raiz1, raiz2);
    }

    else if (discriminante == 0) {
        raiz1 = raiz2 = -b / (2 * a);
        printf("raiz = raiz = %.2lf;", raiz1);
    }

    else {
        real = -b / (2 * a);
        imag = sqrt(-discriminante) / (2 * a);
        printf("raiz1 = %.2lf+%.2lfi y raiz2 = %.2f-%.2fi", real, imag, real, imag);
    }

}
    
    return 0;
} 

