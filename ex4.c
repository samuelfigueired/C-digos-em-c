/*
    4. Sabe-se que um numero complexo ´ e escrito da forma ´ x + iy, onde i
    2 = −1, sendo x a
    sua parte real e y a parte imaginaria, ambas representadas por valores reais. Crie um ´
    Tipo Abstrato de Dados (TAD) que represente os numeros complexos com as seguintes ´
    func¸oes: ˜
    (a) criar um numero complexo ´
    (b) destruir um numero complexo ´
    (c) soma de dois numeros complexos; ´
    (d) subtrac¸ao de dois n ˜ umeros complexos; ´
    (e) mutiplicac¸ao de dois n ˜ umeros complexos; ´
    (f) divisao de dois n ˜ umeros complexos;
*/

#include <stdio.h>
#include <stdlib.h>
#include "Numero.h" // Inclui o cabeçalho que contém a definição do TAD

// Estrutura que representa um número complexo
struct numero {
    float x; // Parte real do número complexo
    float y; // Parte imaginária do número complexo
};

// Função para criar um número complexo
Numero* cria_numero(float x, float y) {
    // Aloca memória para um novo número complexo
    Numero* n = (Numero*)malloc(sizeof(Numero));
    
    // Verifica se a alocação foi bem-sucedida
    if (n != NULL) {
        n->x = x; // Inicializa a parte real
        n->y = y; // Inicializa a parte imaginária
    }
    
    return n; // Retorna o ponteiro para o número complexo criado
}

// Função para destruir (liberar) um número complexo
void fecha_numero(Numero* n) {
    free(n); // Libera a memória alocada para o número complexo
}

// Função para acessar os valores de um número complexo
void acessa_numero(Numero* n, float *x, float *y) {
    // Verifica se o número complexo não é nulo
    if (n != NULL) {
        *x = n->x; // Acessa a parte real
        *y = n->y; // Acessa a parte imaginária
    }
}

// Função para somar dois números complexos
Numero* soma_numero(Numero* n1, Numero* n2) {
    // Verifica se os números complexos não são nulos
    if (n1 == NULL || n2 == NULL) return NULL;
    
    // Cria um novo número complexo que é a soma das partes reais e imaginárias
    return cria_numero(n1->x + n2->x, n1->y + n2->y);
}

// Função para subtrair dois números complexos
Numero* subtrai_numero(Numero* n1, Numero* n2) {
    // Verifica se os números complexos não são nulos
    if (n1 == NULL || n2 == NULL) return NULL;
    
    // Cria um novo número complexo que é a subtração das partes reais e imaginárias
    return cria_numero(n1->x - n2->x, n1->y - n2->y);
}

// Função para multiplicar dois números complexos
Numero* multiplica_numero(Numero* n1, Numero* n2) {
    // Verifica se os números complexos não são nulos
    if (n1 == NULL || n2 == NULL) return NULL;
    
    // Calcula a parte real da multiplicação
    float real = n1->x * n2->x - n1->y * n2->y; 
    // Calcula a parte imaginária da multiplicação
    float imaginario = n1->x * n2->y + n1->y * n2->x; 

    // Cria e retorna um novo número complexo com os resultados da multiplicação
    return cria_numero(real, imaginario);
}

// Função para dividir dois números complexos
Numero* divide_numero(Numero* n1, Numero* n2) {
    // Verifica se os números complexos não são nulos
    if (n1 == NULL || n2 == NULL) return NULL;

    // Calcula o denominador (c^2 + d^2) onde n2->x = c e n2->y = d
    float denominador = n2->x * n2->x + n2->y * n2->y;
    
    // Verifica se o denominador é zero (divisão por zero é inválida)
    if (denominador == 0) return NULL;

    // Calcula a parte real da divisão
    float real = (n1->x * n2->x + n1->y * n2->y) / denominador;
    // Calcula a parte imaginária da divisão
    float imaginario = (n1->y * n2->x - n1->x * n2->y) / denominador;

    // Cria e retorna um novo número complexo com os resultados da divisão
    return cria_numero(real, imaginario);
}


