//
// Created by joao on 19/11/2021.
//

#ifndef METAHEURISTICBIB_ARQUIVO_H
#define METAHEURISTICBIB_ARQUIVO_H

/* le um arquivo no formato num_cid coord_x coord_y e calcula as distancias d_ij  */
void le_arq_matriz(char nomearq[], int n, float **distancia);

/* le um arquivo no formato "numero_cidades melhor_valor" */
void obter_parametros_pcv(char nomearq[], int *n, float *melhor_valor);

void imprime_fo(char nomearq[], float tempo, float fo, int iteracao);

void imprime_fo_viz(char nomearq[], float tempo, float fo, int iteracao, int viz_i, int viz_j);

/* le um arquivo no formato i, valor */
void le_arq_vetor(char nomearq[], int *vetor);

/* Nesta leitura, vetor[j] = valor para todo j=0...n */
void le_arq_vetor_denso(char nomearq[], int *vetor);

void limpa_arquivo(char nomearq[]);
#endif//METAHEURISTICBIB_ARQUIVO_H
