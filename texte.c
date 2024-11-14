void display (int var, int *ptr){
    printf("\n\n");
    printf("Conteudo de var = %d\n", var);
    printf("Endereco de var = %p\n", &var);
    printf("Conteudo apontado por ptr = %d\n", *ptr); //usando asterisco manda o conteudo apontado por ptr
    printf("Endereco apontado por ptr= %p\n", ptr); //endereco de q foi atribuido por var no ptr
    printf("Endereco do ptr      = %p\n", &ptr);
}

void update(int *p){
    *p = *p+1;
}

int main (){
    int var = 15;
    int *ptr;
    ptr = &var;

    display(var, ptr);

    update(ptr);

    display(var, ptr);

    return 0;
}

//Ponteiros:
// *ptr : o apontado por, conteudo do endereço da variavel que ptr aponta
//  ptr : o endereco da variavel
//  &ptr: o endereço do ponteiro