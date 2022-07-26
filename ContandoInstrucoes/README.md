# Contando Instruções

1) Preencher a matriz N x N com números inteiros aleatórios de 0 a 99;

2) Considere a posição Linha 0 e Coluna 0 (0,0) como início e a posição (N, N) como posição final;

3) Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

4) O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente; OBS.: Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

5) Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.

# Explicando a Resolução
### As operações mais relevantes do processo são feitas no arquivo "Matriz.c".
O programa foi feito na linguagem C.
O makefile apresentou alguns problemas em minha máquina, mas funcionou na de um colega.

Primeiro, inicio a matriz com números aleatórios a partir da rand(). Essa operação é feita dentro de uma função void chamada IniciaMatriz().

A segunda função relevante é a função ProcuraECalculaMaiorCaminho(), que como próprio nome diz, procura o maior caminho e entrega o valor da soma.
Nessa função, é importante detalhar os meios usados:

1) Dentro de um while, que tem como condições que a linha e a coluna do elemento analisado da matriz sejam menor do que a ordem definida, há vários ifs e elses que tratam cada situação possível.

2) Define-se o valor maior para usar como certeza de que estamos pegando o valor exato(esse variável é redefinida e assume o valor de cada elemento do caminho por vez), e também coloca-se um OU(|) para que no momento que a variável maior ainda estivesse indefinida(quando estamos no começo da matriz(posição[0][0]), o programa pudesse funcionar normalmente.

3) Posteriormente, há uma sequência de ifs e elses que cuidam de situções como quando o elemento a direita é maior(matriz[linha][coluna+1]), quando é o da esquerda(matriz[linha][coluna-1]) e quando é o abaixo(matriz[linha+1][coluna]).

4) O programa também trata situações como quando estamos na primeira coluna(não há elemento a esquerda), quando estamos na última coluna(não há elementos a direita) e quando estamos na ultima linha(onde só se deve andar para direita).


# Questões

1) Há mais de uma maneira de resolver esse problema ?
    R:Sim, podemos alterar a matriz usando 2 fors. Além de conseguirmos separar cada caso em mais funções, deixando o programa, talvez, um pouco mais didático. Além disso, podemos fazer em outras linguagem de programação que tem recursos melhores para aprimorar a resolução.

2) Há algoritmos em literatura que resolvam esse problema ?
    R: Algoritmos em esquema de árvore podem resolver o problema mais facilmente, além de outros diversos algoritmos no mundo que fazem isso a todo momento, como por exemplo, os utilizados em aplicações de GPS

3) Pode existir mais de um caminho cujo valor total é o maximo?
    R:Sim, uma exemplo fútil e pouco provável(porém didático), é quando a matriz tem só tem números iguais.Nessa situação, existiriam muitas combinações de caminhos cujo o valor total é o valor máximo.
