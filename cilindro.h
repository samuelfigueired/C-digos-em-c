/*8. Desenvolva um TAD para um cilindro. Inclua as func¸oes de inicializac¸ ˜ oes necess ˜ arias e ´
as operac¸oes que retornem sua altura e raio, a sua ˜ area e o seu volume. */
#ifndef CELINDRO_h
#define CELINDRO_h
typedef struct cilindro Cilindro;
Cilindro* criar_cilindro(int r);
void liberar_cilindro(Cilindro* r);
int raio_cilindro(Cilindro* r);
int altura_cilindro(Cilindro* r);
int criar_area(Cilindro* r);
int criar_volume(Cilindro* r);

#endif
