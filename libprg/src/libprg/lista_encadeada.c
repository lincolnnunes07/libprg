//
// Created by aluno on 28/04/2026.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libprg/libprg.h"

typedef struct no {
    int dado;
    no_t* proximo;
} no_t;

no_t* criar_lista_encadeada(int dado) {

    no_t* no = malloc(sizeof(no_t));
    no->dado = dado;
    no->proximo = NULL;
}

void inserir_encadeada(no_t** inicio, int dado) {

    no_t* novo = criar_lista_encadeada(dado);
    novo->proximo = *inicio;
    *inicio = novo;
}








// remover
// buscar
// destruir