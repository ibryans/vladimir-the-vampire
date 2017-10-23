## Introdução - Explicação do problema

O nosso trabalho consiste em fazer com que Vladimir , um vampiro, se desloque de uma cidade A para uma cidade B, passando por diversas estações fixas, porém de distâncias variáveis. No entanto as seguintes condições tem que ser respeitadas:

- Ele só pode viajar de trem, pois precisa levar seu caixão junto. 
- Vladimir, por ser um vampiro, não pode se expor à luz do dia, e por isso ele só viaja entre o anoitecer eo amanhecer. De dia, ele precisa esperar na estação em seu caixão. 
- Vlad precisa se alimentar, e por isso ele precisa levar uma quantidade de sangue necessária para a viagem, que ele toma todo dia ao meio dia (12:00).

Sabendo dessa última condição, além de ser preciso achar o menor caminho entre as duas cidades, com o Vlad viajando somente do amanhecer ao anoitecer, é necessário achar a menor quantidade de sangue que Vladimir precisa levar em sua viagem.


## Modelagem do Problema

Para resolver o problema de Vladimir, criamos um grafo ponderado feito com matriz de adjacências, usando os vértices como as estações e as arestas como a rotas que interligam as estações. 

int **grafo;

E para colocar as arestas com seus respectivos pesos, criamos uma função (para cada grafo):

int **add_mapa_x (int **grafo, int vertices);    // Sendo x o número do mapa

E essa função basicamente adiciona o peso de cada aresta em um vetor chamado custos, e também ao grafo. sendo esse peso um valor aleatório [ rand( ); ]. E retorna o grafo.

Após criar os mapas, precisamos utilizar a função de busca para obter o menor caminho entre uma cidade e outra, que seria então, o caminho que vladimir tomaria.
Utilizamos o algoritmo de Dijkstra, que basicamente retorna o caminho mínimo entre um vértice de origem e todos os outros vértices do grafo. Assim, nós modificamos esse algoritmo para obter apenas o menor caminho entre o primeiro e o último vértice.

void dijkstra ( int vertices, int origem, int destino, int  *custos);

/* Obs: Para armazenar o caminho mínimo, tivemos que utilizar uma variável global, ou seja, alteramos essa variável na função e ela é alterada permanentemente. Esse foi um dos problemas que enfrentamos e conseguimos resolver dessa maneira. */

Depois de conseguir o caminho mínimo, precisamos apenas criar as partes gráficas e interativas do programa, como o menu, a impressão dos mapas, a impressão da viagem do Vlad, e a impressão final, que mostra o tempo total da viagem, e quantos litros de sangue foram consumidos. E isso será explicado na próxima seção.

Para resolver o problema do sangue foi necessário utilizar um contador de todo o tempo em que vladimir esteve dentro do trem até mesmo o tempo em que ele dormia ou esperava na estação até o anoitecer. Como Vladimir toma um litro por dia, a quantidade mínima equivale ao tempo de viagem total / 24. Para isso, utilizamos uma matriz para armazenar os pesos, tempo_de_viagem, para ser somado no contador do sangue.

## Complexidade do programa

O algoritmo de busca utilizado, Dijkstra, tem a complexidade definida por O[v²] e é executado em tempo polinomial. 






















