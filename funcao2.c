#include <stdio.h>

float calcularAreaRetagulo (float base, float altura){
    float area = base * altura;
    return  area;
}

int main(void){
    float calcularAreaRetagulo (float base, float altura);
    float area = calcularAreaRetagulo(10.0, 20.0);
    printf("A area eh: %.2f", area);
    return 0;
}