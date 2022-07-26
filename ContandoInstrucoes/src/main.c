#include "Matriz.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int soma=0,opcao;

    IniciaVetor();
    IniciaMatriz();
    soma=ProcuraECalculaMaiorCaminho();

    printf("\nBem-vindo Usuário, o que deseja fazer?\n");
    printf("\n1.Imprimir a soma do maior caminho;\n");
    printf("\n2.Imprimir caminho em ordem normal;\n");
    printf("\n3.Imprimir caminho em ordem invertida;\n");
    printf("\n0.Sair do programa.\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("\n\nO maior caminho é o que a soma resulta em %d",soma);
        break;

    case 2:
        ImprimeCaminhoNormal();
        break;

    case 3:
        ImprimeCaminhoContrario();
        break;

    case 0:
        printf("\nObrigada por utilizar o programa!:)\n");
        break;

    default:
        printf("\nOpção inválida, por favor, escolha outra!\n");
        break;
    }

    printf("\n\nO maior caminho é o que a soma resulta em %d",soma);
    return 0;
}
