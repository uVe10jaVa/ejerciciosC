#include "stdio.h"
#define MAYORIA_EDAD 18 //No lleva ni igual ni punto y coma
#define EDAD_JUBILACION 67

//main -> saca el esqueleto:
int main(int argc, char const *argv[])
{
    int edad=0;//Declaración e inicialización.
    /*
    int edad;//Declaración. También podría guardarse en un short.
    edad=0;//Inicialización. Darle el primer valor.
    */

   printf("Introduce tu edad:");
   scanf("%d",&edad);
   
   //if  ->estructura de control. Sí lógico. Evalúa la expresión que viene entre (). Devuelve valor true or false.
   if(edad>=MAYORIA_EDAD){// Este if lo va a ejecutar siempre. Dependiendo de los datos de la bbdd, para optimizar el tiempo de ejecución, preguntamos eres mayor de edad o menor.
       if(edad>=EDAD_JUBILACION){
           printf("Enhorabuena, estás felizmente jubilado");
       }else{
           printf("Eres mayor de edad y no puedes jubilarte aún.");
       }
   }
   else{
       printf("Eres menor de edad (Te queda Tela!)");
   }

/*Posible solución 2
    if(edad>=EDAD_JUBILACION){
        printf("Eres mayor de edad y no puedes jubilarte aún.");
    }else if(edad>=MAYORIA_EDAD){
        printf("Eres mayor de edad y no puedes jubilarte aún.");
    }else{
        printf("Eres menor de edad (Te queda Tela!)");
    }
*/

   return 0;
}
