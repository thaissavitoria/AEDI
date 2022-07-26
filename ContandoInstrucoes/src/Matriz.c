#include "Matriz.h"

void IniciaMatriz()
{
    int linha,coluna;
	srand(time(NULL));

    printf("\n\n\tMATRIZ:\n\n");
    for(linha=0;linha<N;linha++)
    {
        for(coluna=0;coluna<N;coluna++)
        {
            matriz[linha][coluna]= rand()%99;
            printf("%02d",matriz[linha][coluna]);
            printf("|");
        }
        printf("\n");
    }
	//preenche matriz com números aleatórios e imprime
};

int ProcuraECalculaMaiorCaminho()
{
    int soma=0,maior,linha=0,coluna=0;

    while(coluna<N && linha<N)
    {
        if(matriz[linha][coluna]==maior || linha==0 && coluna==0)
            {
                if(coluna>0 && coluna<N)
                {
                    if(matriz[linha+1][coluna]>=matriz[linha][coluna+1] && matriz[linha+1][coluna]>=matriz[linha][coluna-1])
                        {
                            maior=matriz[linha+1][coluna];
                            matriz[linha][coluna]=(-N);
                            soma+=maior; 
                            Insere(maior);
                            linha++;
                            //se o valor da linha de baixo for maior do que o valor da coluna do lado,ele ja pula para a próxima linha
                        }
                        else if(matriz[linha][coluna-1]>=matriz[linha][coluna+1] && matriz[linha][coluna-1]>=matriz[linha+1][coluna])
                        {
                            maior=matriz[linha][coluna-1];
                            matriz[linha][coluna]=(-N);
                            soma+=maior;
                            Insere(maior);
                            coluna--;
                            //quando a célula da esquerda é a maior
                        }  
                        else if(matriz[linha][coluna+1]>=matriz[linha][coluna-1] && matriz[linha][coluna+1]>=matriz[linha+1][coluna])
                        {
                            maior=matriz[linha][coluna+1];
                            matriz[linha][coluna]=(-N);
                            soma+=maior;
                            Insere(maior);
                            coluna++;
                            //quando a célula da direita é a maior
                        }                 
                    }
                    else if (coluna==0)
                    {
                        if(linha==0)
                        {
                            soma+=matriz[linha][coluna];
                            Insere(matriz[linha][coluna]);
                        }
                        if(matriz[linha+1][coluna]>matriz[linha][coluna+1])
                        {      
                            maior= matriz[linha+1][coluna];
                            matriz[linha][coluna]=(-N);
                            soma+=maior;
                            Insere(maior);
                            linha++;
                            //se o valor da linha de baixo for maior do que o valor da coluna do lado,ele ja pula para a próxima linha

                        }
                        else if(matriz[linha+1][coluna]<=matriz[linha][coluna+1])
                        {
                            maior= matriz[linha][coluna+1];
                            matriz[linha][coluna]=(-N);
                            soma+=maior;
                            Insere(maior);
                            coluna++;
                        }
                    }
                    else if(coluna==(N-1))
                    {
                        if(matriz[linha+1][coluna]>matriz[linha][coluna-1])
                        {      
                            maior= matriz[linha+1][coluna];
                            matriz[linha][coluna]=(-N);
                            soma+=maior;
                            Insere(maior);
                            linha++;
                            //se o valor da linha de baixo for maior do que o valor da coluna do lado,ele ja pula para a próxima linha

                        }
                        else if(matriz[linha+1][coluna]<=matriz[linha][coluna-1])
                        {
                            maior= matriz[linha][coluna-1];
                            matriz[linha][coluna]=(-N);
                            soma+=maior;
                            Insere(maior);
                            coluna--;
                        }
                        if(linha==(N-1))
                        {
                            soma+=matriz[linha][coluna];
                            coluna++;
                            Insere(maior);
                              ///somas para última linha
                        }
                    }
                }
    }
    return soma;
}

void ImprimeCaminhoNormal()
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%dº número:",i+1);
        printf("%02d\n",caminho[i]);
    }
}

void ImprimerCaminhoContrario()
{
    int i;
    for(i=tam-1;i>0;i--)
    {
        printf("%dº número:",i+1);
        printf("%02d\n",caminho[i]);
    }
}
