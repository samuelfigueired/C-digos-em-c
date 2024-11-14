#include <stdio.h>
void imprimaMensagem(void){
    printf("Teste!\n");
}
int main (){
    void imprimaMensagem(void);
    imprimaMensagem();
    return 0;
}