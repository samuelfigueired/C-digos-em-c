/*
    Funções
    passagem de parametro por valor
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somatorio (int n){
    int i, soma = 0;
    for (i = 1; i <= n; i++){
        soma += i;
    }
    return soma; // Retorne a soma
}

int main (){
    int n = 11, soma;
    soma = somatorio(n);
    printf("%d\n", soma); // Não é necessário chamar a função novamente

    return 0;
}