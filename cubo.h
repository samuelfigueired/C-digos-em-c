#ifndef CUBO_H
#define CUBO_H
typedef struct cubo Cubo;
Cubo* criar_cubo(int l);
void liberar_cubo(Cubo* p);
int lado_cubo(Cubo* l);
int area_cubo(Cubo* l);
int volume_cubo(Cubo* l);

#endif