/* 3 en raya
*/
#include "stdio.h"

#define DIMENSION 3 //No lleva ; porque son directivas de comparación, no son sentencias.
#define MAX_TURNOS 9

void inicializar();
void pintarTablero();
int jugar();

int tablero[DIMENSION][DIMENSION];

int main(int argc, char const *argv[])
{
    inicializar();
    pintarTablero();
    int jugador=0;

    for(int i=0;i<MAX_TURNOS;i++){
        printf("Le toca al jugador %d\n",jugador);
        jugador=jugar(jugador);
        pintarTablero();
    }
   
    return 0;
}

int jugar(int jugador){
    int fila;
    int col;
    printf("Introduce la fila donde quieres poner ficha: \n");
    scanf("%d",&fila);
    printf("Introduce la columna donde quieres poner ficha: \n");
    scanf("%d",&col);

    char ficha='X';
    if(jugador==0){
        ficha='O';
        jugador=1;
    }else{
        ficha='X';
        jugador=0;
    }

    tablero[fila][col]=ficha;

    return jugador;
}

void inicializar(){
    for (int fila=0;fila<DIMENSION;fila++)
    {
        for (int col=0;col<DIMENSION;col++)
        {
            tablero[fila][col]=' ';    
        }
    }
}

void pintarTablero(){
    for (int fila=0;fila<DIMENSION;fila++)
    {
        for (int col=0;col<DIMENSION;col++)
        {
            printf(" %c -",tablero[fila][col]);    
        }
        printf("\n");
    }
}

