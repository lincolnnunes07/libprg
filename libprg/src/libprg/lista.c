//
// Created by aluno on 02/04/2026.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define capacidade_inicial 10
#include "libprg/libprg.h"

typedef struct lista_linear {
    int *elementos;
    int tamanho;
    int capacidade;
    bool ordenada;
} lista_linear_t;

lista_linear_t *criar_lista(bool ordenada) {
    lista_linear_t *lista = malloc(sizeof(lista_linear_t));
    lista->elementos = malloc(sizeof(int) * capacidade_inicial);
    lista->tamanho = 0;
    lista->capacidade = capacidade_inicial;
    lista->ordenada = ordenada;

    return lista;

}
remover(lista_linear_t* lista, int alvo) {
    int indice;

    if (lista.ordenada) {
        indice = buscar_binario
    } else {
        indice = buscar_linear
    }




// buscar_linear
// buscar_binario
// inserir
// remover
// alterar
// ordenar
// combinar
// destruir