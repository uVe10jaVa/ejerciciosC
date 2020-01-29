#include "stdio.h"

#define NUM_ELEMENTOS 5

int main(int argc, char const *argv[])
{
    //Vector - Arrays. Conjunto de variables de la misma naturaleza, creamos una colección
    int edades[NUM_ELEMENTOS];
    //Estructura de datos, colección de 5 cosas. 
    // Se declara con un tamaño determinado y después no la puede cambiar. Se puede redefinir pero lo que hace es copiar el array y lo vuelve a crear con otra dimensión
    
    //Para referirnos a las celdas: nombreArray[n] -> nombreArray[numPosicion]. Hasta nombreArray[n-1]
    edades[0]=10;//lo inicializamos por índice
    edades[1]=15;
    edades[2]=32;
    edades[3]=18;
    edades[4]=21;
    // edades[20]=1000; Está mal, el índice está fuera de los límites, pero el compilador de c no da problemas, se lo come. 
    
    for(int i=0;i<NUM_ELEMENTOS;i++){
        printf("Estamos en el elemento %d del array. Y el contenido es %d\n",i,edades[i]);
    }

    //Alternativa:
    int otrasEdades[]={10,16,23,14,34};//Se inicializa con esos valores ya conocidos, no se pone el num de elementos entre los corchetes

    return 0;
}
