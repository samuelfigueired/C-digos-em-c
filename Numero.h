#ifndef NUMERO_H
#define NUMERO_H

// Definindo a estrutura para o número complexo
typedef struct numero Numero;

// Função para criar um número complexo
Numero* cria_numero(float x, float y);

// Função para destruir (liberar) um número complexo
void fecha_numero(Numero* n);

// Função para acessar os valores de um número complexo
void acessa_numero(Numero* n, float *x, float *y);

// Função para somar dois números complexos
Numero* soma_numero(Numero* n1, Numero* n2);

// Função para subtrair dois números complexos
Numero* subtrai_numero(Numero* n1, Numero* n2);

// Função para multiplicar dois números complexos
Numero* multiplica_numero(Numero* n1, Numero* n2);

// Função para dividir dois números complexos
Numero* divide_numero(Numero* n1, Numero* n2);

#endif
