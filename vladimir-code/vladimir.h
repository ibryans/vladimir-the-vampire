#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <termios.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>


/* Funções para a interação */


// Tela de loading
void loading();

// Tela de introdução
void introducao();

// Menu
int menu();

// Imprime a viagem do vlad
void imprime_viagem(int **pesos);

// Função START
void start(int **grafo);

// Função que inicia o game
void start_game (int **grafo,int trajeto);

// Tela de mapas
int mapas();

// Créditos
void credits();


/* Funções relacionadas a grafo */

// Função de busca (Algoritmo de Djikstra)
int dijkstra(int vertices,int origem,int destino,int *custos);

// Adiciona o primeiro mapa
int **add_mapa_1(int **grafo, int vertices);

// Adiciona o segundo mapa
int **add_mapa_2(int **grafo, int vertices);

// Adiciona o terceiro mapa
int **add_mapa_3(int **grafo, int vertices);

