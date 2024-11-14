/*9. Desenvolva um TAD para um esfera. Inclua as func¸oes de inicializac¸ ˜ oes necess ˜ arias e ´
as operac¸oes que retornem seu raio, a sua ˜ area e o seu volume.*/

#include <stdio.h>
#include <stdlib.h>
#include "esfera.h"

typedef struct{
    int raio;
}Esfera;

Esfera* criar_esfera(int r){
    Esfera* e = (Esfera*)malloc(sizeof(Esfera));
    if(r !=){
        e->raio = r;
    }
    return e;
}

void libera_esfera(Esfera* e){
    free(e);
}
int raio_esfera(int r){
    if(r !=  NULL){
        return 0;
    }
    return r->raio;

}

int area_esfera(int r){
    if(r != NULL){
        return 0;
    }
    return 4 * 3.14(pow(r, 2));
}