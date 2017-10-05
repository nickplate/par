#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define M 3
#define FLUSH  while(getchar() != '\n')

int main()
{
    int i, opc1=9;
    struct modelo datos[M];

    /* PUESTA EN CERO DEL VECTOR DE CODIGOS */
    for(i=0; i<M; i++)
        strcpy(datos[i].codigo, "0000");

    while (opc1!=5)
    {
        system("cls");
        printf("Menu principal\n");
        printf("--------------\n");
        printf("1 - Alta\n");
        printf("2 - Baja\n");
        printf("3 - Muestra en pantalla\n");
        printf("4 - Modificacion\n");
        printf("5 - Salir\n");
        printf("Elija opcion: ");

        /* LEE OPCION*/
        scanf("%d", &opc1);
        switch (opc1)
        {
        /* OPCION ALTA DE PRODUCTOS*/
        case 1:
            IngresoDatos(datos);
            break;
        /* OPCION QUE DA DE BAJA UN ARTICULO */
        case 2:
            BajaDatos(datos);
            break;
        /* OPCION MUESTRA EN PANTALLA */
        case 3:
            MuestraDatos(datos);
            break;
        /* OPCION DE MODIFICACION DE ARTICULOS */
        case 4:
            ModificaDatos(datos);
            break;
        case 5:
            system("cls");
            printf("Fin del programa\n");
            system("pause>>null");
            break;
        default:
            printf("Opcion incorrecta");
            system("pause>>null");
            break;
        }

    }

    getche();
    return 0;
}
