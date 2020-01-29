#include "stdio.h"
#define MAYORIA_EDAD 18 //No lleva ni igual ni punto y coma

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
   if(edad>=MAYORIA_EDAD){//edad>=18 -> El 18 tiene que ser una constante. Hardcode. Por eso lo definimos arriba
       printf("Eres mayor de edad");
   }
   else{
       printf("Eres menor de edad");
   }

   return 0;
}
