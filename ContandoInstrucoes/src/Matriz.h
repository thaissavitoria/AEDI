#ifndef MATRIZ__H
#define MATRIZ__H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "Caminho.h"

int matriz[N][N];

int caminho[N*N];

void IniciaMatriz();

int ProcuraECalculaMaiorCaminho();

void ImprimeCaminhoNormal();

void ImprimeCaminhoContrario();

#endif