#include "Caminho.h"

void IniciaVetor()
{
    int i=0;
    while(i<tam)
    {
        caminho[tam]=-1;
        i++;
    }
}
void Insere(int valor)
{
    int i=0;
    while(i<tam)
    {
        if(caminho[i]!=-1)
        {
            caminho[i]=valor;
        }
    }
}