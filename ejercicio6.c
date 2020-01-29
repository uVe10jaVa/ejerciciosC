#include "stdio.h"

int main(int argc, char const *argv[])
{
    int idPeli;

    printf("\n1. El Irlandes");
    printf("\n2. Origen");
    printf("\n3. El Golpe");
    printf("\n4. Kick Ass");
    printf("\n5. El Padrino\n");

    printf("\nIntroduce un num de pelicula\n");
    scanf("%d",&idPeli);

    switch (idPeli)
    {
        case 1:
            printf("\nEs la pelicula favorita de Miguel Angel");
            break;
        case 2:
            printf("\nEs la pelicula favorita de Alejandro (columna 0)");
            break;
        case 3:
            printf("\nEs la pelicula favorita de Alberto");
            break;
        case 4:
            printf("\nEs la pelicula favorita de Puri");
            break;
        case 5:
            printf("\nEs la pelicula favorita de Pascual");
            break;

        default://Opcional
            printf("\nEsa pelicula no existe");
            break;
    }
}
