#ifndef RACIONAIS_H
#define RACIONAIS_H
    typedef struct{
        int numerador;
        int denominador;
    }Racional;

    Racional* criaRacional(int num, int den);
    Racional* somaRacional(Racional* a, Racional* b);
    Racional* multiRacional(Racional* a, Racional* b);
    int iguais(Racional* a, Racional*b);
    void liberaRacional (Racional* n);
#endif