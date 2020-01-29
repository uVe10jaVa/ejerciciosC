#include "stdio.h"

/*
Las constantes se nombran en mayúsculas y por _ guión bajo entre palabras.
Ej: NUMERO_DE_DIAS
*/

#define PI=3.1415926

int main(int arg, char const *argv[]){

    int x;//Declaración de variable
    int y,z;//Declaración de variables múltiples

    //Números:
 
     //Enteros
    short s;//1byte, 256 caracteres. Desde -127,128 si es negativo. 0-255 si es positivo?
    int i;//2bytes. El más común
    long 1=0;//4bytes

    //Decimales
    float f=0.0;//4bytes. lo normal
    double d=0.0;//8bytes

    //Alfanuméricos
    char c='a'; //sólo un caracter

    char cadena[]="Esto es una cadena";
    //[] -> indican que es una sucesión de variables de tipo char, todas bajo un mismo nombre.. 
    //Ocupa 18 caracteres+1 que es el delimitador de fin de cadena
    int edades[5];//muchos elementos para el mismo tipo. En este caso 5 números enteros.

    diasPorMes=10;//Al ser variable, puede cambiar de valor

    printf("%d\n",diasPorMes);
    printf("%d\n",i);
    printf("%d\n",l);
    printf("%f\n",f);
    printf("%f\n",d);
    printf("%f\n",c);

    return 0;
}