#include "stdio.h"
#include "stdlib.h"
#include "time.h"

//El programa te pide 10 intentos de numero para saber si aciertas el numero aleatorio que genera el programa

//DEFINIMOS LAS CONSTANTES
#define NUMERO_MAXIMO 30 
#define OPORTUNIDADES 5

int getRandom();

int main(int argc, char const *argv[])
{
    //Obtener el numero aleatorio 
    int aleatorio=getRandom(); //Asignación . Ejecuta lo del lado dcho y el resultado lo asigna a la variable de la izqda del igual.
    int adivinado;//No hace falta inicializarla porque el primer uso que le doy es recoger el num y asignarle un valor
    //int numErrores=0; Si queremos ir contando los intentos que lleva y no nos lo da el contador, que en este caso sí nos lo dice
    int i;
    for(i=0;i<OPORTUNIDADES;i++){
        printf("\nAdivina el numero generado aleatoriamente:\n");
        scanf("%d",&adivinado);
        if(adivinado==aleatorio){
            printf("Lo adivinaste!!");
            break;
        }else{
            printf("Ooohhh... No has acertado, prueba otra vez\n");
            //numErrores++:
        }
    }
    if(i==OPORTUNIDADES){
        printf("\nNo has conseguido adivinar el numero secreto.\n");
    }
    printf("\nEl numero secreto era el %d",aleatorio);

    return 0;
}

int getRandom(){
    srand(time(NULL));
    int generado=rand()%NUMERO_MAXIMO;
    return generado;
}