//
// Created by aluno on 02/04/2026.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct lista_linear {
    int elementos;
    int tamanho;
    int capacidade;
    bool ordenada;

} lista_linear_t;

int criar_lista(lista_linear_t* lista) {

    lista->elementos = 0;

}

int