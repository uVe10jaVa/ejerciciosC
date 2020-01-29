#include "stdio.h"

/*
Diagnosticador médico

1. Dolor de cabeza -> Nada
2. Dolor de cabeza + Fiebre -> Gripe
3. Dolor de cabeza + Fiebre + Vienes de China -> Coronavirus
*/

int main(int argc, char const *argv[])
{
    int dolorCabeza, fiebre, origenChina;
    printf("Te duele la cabeza? [0-No. 1-Si]");
    scanf("%d",&dolorCabeza);
    printf("Tienes fiebre? [0-No. 1-Si]");
    scanf("%d",&fiebre);
    printf("Vienes de China? [0-No. 1-Si]");
    scanf("%d",&origenChina);

//Versión 1
    if(dolorCabeza==1){
        if(fiebre==1){
            if(origenChina==1){
            printf("Enhorabuena! Viniste con la compania del Coronavirus");
            }
            else{
                printf("Gripe");
            }
        }
        else{
            printf("Nada: Paracetamol");
        }     
    }else{// si no le duele la cabeza
        printf("Sano");
    }


/*Versión 2
if(origenChina==1 && fiebre==1 && dolorCabeza==1){
    //mejor poner la más restrictiva primero. Venir de China, para que no lea las siguientes condiciones.
    //Sobre todo para ahorrar tiempo en el caso de que en la evaluación dentro del if llame a alguna función que tenga que ejecutarse.
    printf("Coronavirus");
}else if( fiebre==1 && dolorCabeza==1){
    printf("Gripe");
}else if(dolorCabeza==1){
    printf("Nada");
}else{
    printf("Sano");
}
*/
    return 0;
}
