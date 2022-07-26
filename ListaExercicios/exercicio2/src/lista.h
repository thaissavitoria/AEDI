#ifndef __lista
#define __lista

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define maxtam 100

typedef struct nome
{
    char nome[maxtam];
}nome;

typedef struct lista
{
    nome nomes[maxtam];
    int primeiro;
    int ultimo;
}lista;

void FLVazia(lista *l);
//////faz lista vazia

bool Insere(lista *l, nome x);
////retorna falso se não há espaço e verdadeiro se inseriu

void ImprimeLista(lista*l);

void remover_iguais(lista *l);

#endif