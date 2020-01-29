#include "stdio.h"

#define NUM_ELEMENTOS 5

int main(int argc, char const *argv[])
{
    //Pedimos al usuario 5 valores y luego calculamos la suma

    int valores[NUM_ELEMENTOS];
    int total=0;//Declaración de variable, aunque la uses más abajo, se declara arriba en la función

    for (int i=0; i<NUM_ELEMENTOS; i++)
    {
        printf("Introduce el numero de la posicion %d: ",i);
        scanf("%d",&valores[i]);//le estamos pasando la dirección, por eso lleva el '&', la función scanf no devuelve nada, modifica la dirección de memoria que le pasas
    }

    for(int i=0;i<NUM_ELEMENTOS;i++){
        printf("El numero de la posicion %d es el %d\n",i,valores[i]);
    }

    for(int i=0;i<NUM_ELEMENTOS;i++){
        total=total+valores[i];
        printf("Acabamos de sumar al total, el valor de %d, y ahora llevamos la siguiente suma: %d\n",valores[i],total);
    }
    printf("\nEl total del sumatorio de todos los valores del array es: %d ",total);
    return 0;
}
