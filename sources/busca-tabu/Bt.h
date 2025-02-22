//
// Created by joao on 19/11/2021.
//

#ifndef METAHEURISTICBIB_BT_H
#define METAHEURISTICBIB_BT_H

#include <vector>
using namespace std;

float BT(int n, vector<int> &s, float **d,
         int tamanho_maximo_lista, int BTmax);

/*
 * Função melhor vizinho alterada para verificar se o movimento é tabu
 */
float melhor_vizinho_BT(int n, vector<int> &s, float **d, float fo,
                        int *melhor_i,
                        int *melhor_j,
                        float fo_star,
                        int iterAtual,
                        int **listaTabu);

/*
 * A lista tabu é uma matriz indicando em cada célula (i,j)
 * até que iteração o movimento de troca envolvendo as posições i e j ficarão proibidas.
 */
bool eh_tabu(int posicao1, int posicao2, int iterAtual, int **listaTabu);
#endif//METAHEURISTICBIB_BT_H
