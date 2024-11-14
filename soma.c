#include <stdio.h>

int soma(int a, int b) { 
    return a + b; 
    }
int multiplica(int a, int b) { 
    return a * b; 
    }

typedef int (*Operacao)(int,int);

//Executa uma operação binária sobre dois operandos
int opera(int a, int b, Operacao op) {
  return op(a,b);
}

int main() {
  printf("%d\n", opera(3, 4, soma));       //imprime 7
  printf("%d\n", opera(3, 4, multiplica)); //imprime 12
}