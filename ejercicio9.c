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
    do{
        printf("\nAdivina el numero generado aleatoriamente:\n");
        scanf("%d",&adivinado);
    }while (adivinado!=aleatorio);//Mientras que el numero introducido sea diferente al secreto, lo sigue repitiendo.
        printf("\nLo adivinaste!! El numero aleatorio era el %d",aleatorio);

    return 0;
}

int getRandom(){
    srand(time(NULL));//Generación de la semilla aleatoria, con la semilla del time para que sea cambiante.
    int generado=rand()%NUMERO_MAXIMO;// % Operador Módulo. Entre los cuales esta comprendido el numero.
    return generado;
}