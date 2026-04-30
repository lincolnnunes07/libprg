#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

// PILHA
typedef struct pilha pilha_t;
pilha_t* criar_pilha(int capacidade);
int empilhar(pilha_t* pilha, int valor);
int desempilhar(pilha_t* pilha);
int tamanho(pilha_t* pilha);
int vazia(pilha_t* pilha);
int destruir_pilha(pilha_t* pilha);


// FILA
typedef struct fila fila_t;
fila_t* criar_fila(int capacidade);
void enfileirar_fila (fila_t* fila, int valor);
int desenfileirar_fila (fila_t* fila);
int inicio_fila(fila_t* fila);
int fim_fila(fila_t* fila);
int vazia_fila(fila_t* fila);
int cheia_fila(fila_t* fila);
int destruir_fila(fila_t* fila);

// LISTA
typedef struct lista_linear lista_linear_t;

// LISTA ENCADEADA
typedef struct no no_t;
no_t* criar_lista_encadeada(int dado);
void inserir_encadeada(no_t** inicio, int dado);
no_t* buscar_encadeada(no_t** inicio, int dado);
bool remover_encadeada(no_t** inicio, int dado);
void destruir_encadeada(no_t** incio);

#endif
