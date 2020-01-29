#include "stdio.h"

#define NUM_ROWS 3
#define NUM_COLS 5

int main(int argc, char const *argv[])
{
    //int loquesea[10]; Esto es un Vector

    //Matriz de Ventas:
    // 3 filas-categorías (alimentación, moda, juguetes) y 5 columnas-días semana (lunes a viernes)
    int ventas[NUM_ROWS][NUM_COLS];
    int suma=0;

    //Pongo a 0 todas las celdas:
    for (int fila=0;fila<NUM_ROWS;fila++)
    {
        for (int col=0;col<NUM_COLS;col++)
        {
            ventas[fila][col]=0;    
        }
    }

    //doy valor a algunas celdas
    ventas[0][0]=10;
    ventas[1][2]=15;
    ventas[2][0]=31;
    ventas[2][3]=8;

    //Mostrar la Matriz
    printf(" Vamos a mostrar el contenido de nuestra tabla: \n");
    for (int fila=0;fila<NUM_ROWS;fila++)
    {
        for (int col=0;col<NUM_COLS;col++)
        {
            //printf("ventas[%d][%d] = %d - ",fila,col,ventas[fila][col]);
            printf(" %d - ",ventas[fila][col]);
        }
        printf("\n");//Salto de línea tras cada fila
    }
    
    //mostrar la suma de valores de la tercera fila:
    for(int i=0;i<NUM_COLS;i++){
        printf(" %d + %d = %d \n",suma,ventas[2][i],suma+ventas[2][i]);
        suma=suma+ventas[2][i];
        
    }
    printf(" La suma de los valores de la tercera fila es: %d ",suma);
    return 0;
}
