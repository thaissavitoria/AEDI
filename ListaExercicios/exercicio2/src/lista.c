#include "lista.h"

void FLVazia(lista *l)
{
    nome aux;
    
    for(int i=0;i<maxtam;i++)
    {
        aux.nome[0]='0';
        l->nomes[i]=aux;
    }

    l->primeiro=0;
    l->ultimo=0;
}

bool Insere(lista *l, nome x)
{
    if(l->ultimo==maxtam)
    {
        for(int i=0;i<maxtam;i++)
        {
            if(l->nomes[i].nome[0]=='0')
            {
                l->nomes[i]=x;
                return true;
            }
        }
        return false;
    }
    else
    {
        l->nomes[l->ultimo]=x;
        l->ultimo++;
        return true;
    }
}

void ImprimeLista(lista*l)
{
    int i,aparece=1;

    for(i=0;i<maxtam;i++)
    {
        if(l->nomes[i].nome[0]!='0')
        {
            printf("%03d - %s\n",aparece,l->nomes[i].nome);  
            aparece++;
        }
    }
}

void remover_iguais(lista *l)
 {
    int i,j;

    if(l->ultimo==l->primeiro)
     {
         printf("\n\nA lista está vazia.\n\n");
     }
     else
     {
         for(i=0;i<maxtam;i++)
         {
             for(j=0;j<maxtam;j++)
             {
                if(strcmp(l->nomes[i].nome,l->nomes[j].nome)==0 && i!=j)
                 {
                    l->nomes[j].nome[0]='0';
                 }
             }            
        }

        }
        printf("\n\nOs nomes replicados foram removidos!\n\n"); 
}  
