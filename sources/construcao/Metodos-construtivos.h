//
// Created by joao on 19/11/2021.
//

#ifndef METAHEURISTICBIB_METODOS_CONSTRUTIVOS_H
#define METAHEURISTICBIB_METODOS_CONSTRUTIVOS_H
#include <vector>

using namespace std;

void constroi_solucao(int n, vector<int> &s, float **distancia);

/* Constroi uma solucao de forma gulosa usando o m�todo do vizinho mais proximo */
void constroi_solucao_gulosa_vizinho_mais_proximo(int n, vector<int> &s, float **d);

/* Constroi uma solucao de forma aleatoria */
void constroi_solucao_aleatoria(int n, vector<int> &s, float **d);

/* Constroi uma solucao parcialmente gulosa com base no metodo do vizinho mais proximo */
void constroi_solucao_parcialmente_gulosa_vizinho_mais_proximo(int n, vector<int> &s, float **d, float alpha);

/* Constroi uma solucao gulosa usando o m�todo da insercao mais barata */
void constroi_solucao_gulosa_insercao_mais_barata(int n, vector<int> *s, float **d);

/* Constroi uma solucao parcialmente gulosa com base no metodo da insercao mais barata */
void constroi_solucao_parcialmente_gulosa_insercao_mais_barata(int n, vector<int> &s, float **d, float alpha);

#endif//METAHEURISTICBIB_METODOS_CONSTRUTIVOS_H
