/*8. Desenvolva um TAD para um cilindro. Inclua as func¸oes de inicializac¸ ˜ oes necess ˜ arias e ´
as operac¸oes que retornem sua altura e raio, a sua ˜ area e o seu volume. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "cilindro.h"

typedef struct {
    float raio;
}Cilindro;

Cilindro* criar_cilindro(int r){
    Cilindro* ptr;
    ptr = (Cilindro*)malloc(sizeof(Cilindro));
    if(Cilindro != NULL){
        ptr->raio = r;
    }
    return ptr;
}

void liberar_cilindro(Cilindro* r){
    free(r);
}

int raio_cilindro(Cilindro* r){
    if(r !=  NULL){
        return 0;
    }
    return r->raio;
}

int altura_cilindro(Cilindro* r){
    if(r != NULL){
    int altura = pow(raio_cilindro(r), 2);
    }
    return altura;
}

int criar_area(Cilindro* r){
    if(r != NULL){
    int area = 2 * 3.14 * raio_cilindro(r)(raio_cilindro(r)*altura_cilindro(r))
    }
    return area;
}

int criar_volume(Cilindro* r){
    if(r != NULL){
        int volume = 3.14 * (pow (criar_raio(r), 2))* criar_altura(r);
        return volume;
    }
}