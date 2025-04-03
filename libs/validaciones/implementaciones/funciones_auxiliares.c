#include "funciones_auxiliares.h"

void imprimir_vector_int_terminaEnMenosUno(int vec[]){
    int i = 0;
    while(vec[i]!=-1){
        printf("%i ",vec[i]);
        i++;
    }

    printf("\n");
}
