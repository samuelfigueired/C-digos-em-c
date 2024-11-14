/*
7. Desenvolva um TAD para um cubo. Inclua as func¸oes de inicializac¸ ˜ oes necess ˜ arias e as ´
operac¸oes que retornem os tamanhos de cada lado, a sua ˜ area e o seu volume.

*/

#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

typedef struct{
    int lado;
}Cubo;

Cubo* criar_cubo(int l){
    Cubo* ptr = (Cubo*)malloc(sizeof(Cubo));
    if(ptr != NULL){
        ptr->lado = l; 
    }
    return ptr;
}
void liberar_cubo(Cubo* p){
    free(p);
}

int lado_cubo(Cubo* l){
        if(l == NULL)
            return 0;
    return l->lado; //retorna um lado
}
int area_cubo(Cubo* l){
    if(l == NULL)
        return 0;
    return 6 * (lado_cubo(l) * lado_cubo(l)); //ret
}
int volume_cubo(Cubo* l){
    if(l == NULL)
        return 0;
    ind lado = lado_cubo(l);
    return lado * lado * lado;
}

int main(){
    Cubo* l;
    int n = 2;
    l = criar_cubo(n);
    printf("Lado: %d\n", lado_cubo(l));
    printf("Area: %d\n", area_cubo(l));
    printf("Volume: %d\n", volume_cubo(l));
    liberar_cubo(l);

    return 0;
}
