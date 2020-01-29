#include "stdio.h"

int i=1; //Es una variable global, está fuera del main
void mostrar(); //C necesita tener declaradas las funciones al principio
int main(int argc, char const *argv[])
{
    //si declaramos la i aquí, existe fuera del for también

    //Ej1 Iniciamos int i;
    for(int i=0; i<10; i++){//Cuando vamos a ejecutar este bucle un número determinado de veces y que conocemos de antemano
        //1º se Inicializa: int i=0 inicializa . 
        //2º Se evalúa . Mientras i<10.
        //3º -> i++ se ejecuta al finalizar cada vuelta, por eso en la primera vuelta la i=0.

        //i está declarada sólo dentro del for. sólo la usamos dentro del for

        printf("%d",i);

        if(i==5){
            break;
        }
    }
    //Ej1 ¿He encontrado lo que buscaba?? El for lo ejecuta hasta i=9 pero al finalizar le suma uno más, y aunque no ejecute el for, sí le suma uno más if(i>=10) NO. Else sí



    for(int i=10; i>=0; i--){//Del 10 al 0
        //1º se Inicializa: int i=0 inicializa . 
        //2º Se evalúa . Mientras i>=0.
        //3º -> i-- se ejecuta al finalizar cada vuelta, por eso en la primera vuelta la i=10.
        
        //i está declarada sólo dentro del for. sólo la usamos dentro del for

        printf("%d",i);
    }

    for(int i=0; i<10; i=i+2){} //De cero a 10 de dos en dos

    for(;i<10;){}// De cero a 10.

    for(;;){}//Bucle infinito

    return 0;
}
