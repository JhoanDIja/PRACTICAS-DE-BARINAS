#include <conio.h>
#include <stdio.h>

void sumaSucesiva();
int resultado, i, n1, n2;
int main()
{
    sumaSucesiva();
    return 0;
}

void sumaSucesiva(){
	printf( "Introduzca primer numero: ");
    scanf( "%d", &n1 );
    printf( "\nIntroduzca segundo numero ");
    scanf( "%d", &n2 );

    if ( n1 >= 0 && n2 >= 0 )
    {
        resultado = 0;

        if ( n2 != 0 )
        {
           for(i=1;i<=n1;i++){
           		resultado +=n2;
		   }
        }

        printf( "\nEl resultado de: %d * %d = %d", n1, n2, resultado );

    }
    else
        printf( "\n   ERROR: Ambos numeros deben ser mayores o iguales que cero.");

	return;

}
