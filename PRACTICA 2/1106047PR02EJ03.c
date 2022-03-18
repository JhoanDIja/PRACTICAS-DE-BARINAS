#include <stdio.h>
#include <stdlib.h>
#define max 1000
int i;
int negativos =0;
int positivos =0;
void conjunto();
int main()
{
    conjunto();
    return 0;
}
void conjunto(){
int arr[max];
    int length, i,flag;


    printf("Introduzca la cantidad de valores a ingresar ");
    scanf("%d", &length);


    printf("Conjunto de datos: ");
    for(i=0; i<length; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>0)
        positivos++;
        else negativos++;
        if (arr[i] == 0)break;
    }
    printf("positivos: %d", positivos);
    printf("\n negativos %d",negativos);
}
    

