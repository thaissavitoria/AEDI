#include "arquivo.h"

void CopiaNomesDoArq(lista* l)
{
    FILE*arq;
    char nomecop[100];
    nome nomeli;
    bool confere;
    
    arq=fopen("nomes.txt","r");
    if(arq==NULL)
    {
        printf("\nHouve um erro ao abrir o arquivo!\n");
        exit(0);
    }
    else
    {
        while(!feof(arq))
        {
            fgets(nomecop,100,arq);
            strcpy(nomeli.nome,nomecop);
            confere=Insere(l,nomeli);
            if(confere==true)
            {
                printf("\nNome %s inserido na lista com sucesso!\n",nomeli.nome);
            }
            else
            {
                printf("\nNão foi possível inserir o nome %s na lista!\n",nomeli.nome);
            }
        }
    }
    fclose(arq);
}