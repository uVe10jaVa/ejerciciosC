#include "stdio.h"

/*
Las constantes se nombran en mayúsculas y guión bajo entre palabras.
Ej: NUMERO_DE_DIAS
*/

#define PI=3.1415926

int main(int arg, char const *argv[]){

    int x;//Declaración de variable
    int y,z;//Declaración de variables múltiples

    //Números Enteros
    short s;//1byte, 256 caracteres. Desde -127,128 si es negativo. 0-255 si es positivo?
    int i;//El más común
    long 1=0;

    //Decimales
    float f=0.0; //lo normal
    double d=0.0;

    //Alfanuméricos
    char c='a'; //sólo un caracter
    char cadena[]="Esto es una cadena";

    diasPorMes=10;//Al ser variable, puede cambiar de valor

    printf("%d\n",i);
    printf("%f\n",f);

    return 0;
}