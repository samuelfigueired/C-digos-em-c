/*6. Crie um Tipo Abstrato de Dados (TAD) que represente os numeros racionais e que con- ´
tenha as seguintes func¸oes: ˜
(a) Cria racional;
(b) Soma racionais;
(c) Multiplica racionais;
1
(d) Testa se sao iguais;*/
#include <stdio.h>
#include <stdlib.h>
#include "racionais.h"
typedef struct racional Racional;

Racional* criaRacional(int num, int den){
    if (den == 0) {
        printf("Erro: Denominador nao pode ser zero.\n");
        return NULL;
    }
    Racional *r = (Racional*)malloc(sizeof(Racional));
    if (r != NULL) {
        r->num = num;
        r->den = den;
    }
    return r;
}

Racional* somaRacional(Racional* a, Racional* b){ 
    if(a == NULL || b == NULL) return NULL;
    int num = a->num * b->den + b->num * a->den;
    int den = a->den * b->den;

    return criaRacional(num, den);
}

Racional* multiRacional(Racional* a, Racional* b){
    if(a == NULL || b == NULL) return NULL;
    int num = a->num * b->num;
    int den = a->den * b->den;

    return criaRacional(nume, den);
}

void liberaRacional (Racional* n){
    If(n != NULL){
        free(n);
    }
}

int iguais(Racional* a, Racional*b){
    if(a == NULL || b == NULL) return NULL;
        if(a->num == b ->num && a->den == b->den){
            return 1;
        } else {
            return 0;
        }
}
