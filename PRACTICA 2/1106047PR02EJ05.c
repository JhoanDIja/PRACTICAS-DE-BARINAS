#include <stdio.h>
#include <stdio.h>

int main()
{
    int i, dividendo, divisor,residuo;

    printf( "\n   Introduzca dividendo (entero): " );
    scanf( "%d", &dividendo );
    printf( "\n   Introduzca divisor (entero): " );
    scanf( "%d", &divisor );

    if ( dividendo > 0 && divisor > 0 )
    {
        residuo = dividendo;

			for(i = 0;residuo>=divisor;i++){
				residuo -= divisor;
			}

        printf( "\n El residuo de %d y %d es %d y el cociente es %d", dividendo, divisor, residuo, i);
    }
    else
        printf( "\n Numeros invalidos (para la proxima ponga numeros mayores o iguales que 0)");


    return 0;
}
