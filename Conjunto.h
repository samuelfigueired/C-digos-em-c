/*
5. Crie um Tipo Abstrato de Dados (TAD) que represente o tipo conjunto de inteiros, utilizando uma representac¸ao de vetor de inteiros e que contenha as seguintes func¸ ˜ oes: ˜
(a) Uniao˜
(b) Cria um conjunto vazio
(c) Insere
(d) Remove
(e) Intersecc¸ao˜
(f) Diferenc¸a
(g) Testa se um numer pertence ao conjunto ´
(h) Menor valor
(i) Maior valor
(j) Testa se os conjuntos sao iguais ˜
(k) Tamanho
(l) Testa se o conjunto e vazio
*/
#ifndef CONJUNTO_H
#define CONJUNTO_H
    typedef struct conjunto Conjunto;
    Conjunto* criar_conjunto(int valor);
    void destroi_conjunto(Conjunto *c); // destroi todo o conjunto
    void atribuir_valor (Conjunto* c, int valor); //atribui algum  valor ao conjunto
    void remove_conjunto (Conjunto* c, int valor); //remove um valor do conjunto

#endif  