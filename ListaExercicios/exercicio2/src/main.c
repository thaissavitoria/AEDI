#include "arquivo.h"

int main(){
    
lista *l=(lista*)malloc(sizeof(lista));

FLVazia(l);

printf("\nLendo o arquivo e transcrevendo os nomes para uma lista...\n");
CopiaNomesDoArq(l);

printf("\nImprimindo Lista....\n");
ImprimeLista(l);

printf("\nAgora, vamos remover os nomes repetidos...\n");
remover_iguais(l);

printf("\nImprimindo a lista SEM os nomes repetidos...\n");
ImprimeLista(l);

}
