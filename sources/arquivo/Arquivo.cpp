//
// Created by joao on 19/11/2021.
//

#include "Arquivo.h"
#include "utils/Utils.h"
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>

using namespace std;

/* le um arquivo no formato num_cid coord_x coord_y e calcula as distancias d_ij  */
void le_arq_matriz(char nomearq[], int n, float **distancia) {
    int *vet_x, *vet_y;
    int x, y, i, j;
    FILE *arquivo;

    vet_x = cria_vetor(n);
    vet_y = cria_vetor(n);
    arquivo = fopen(nomearq, "r");
    if (!arquivo) {
        cout << "O Arquivo " << nomearq << "nao pode ser aberto.\n";
        getchar();
        exit(1);
    }

    while (!feof(arquivo)) {
        fscanf(arquivo, "%d %d %d", &i, &x, &y);
        vet_x[i] = x;
        vet_y[i] = y;
    }


    // gera a matriz de distancias calculado a partir das distancias euclidianas dos pontos
    for (i = 0; i < n - 1; i++) {
        distancia[i][i] = 0;
        for (j = i + 1; j < n; j++) {
            distancia[i][j] = (float) sqrt(pow(vet_x[i] - vet_x[j], 2) + pow(vet_y[i] - vet_y[j], 2));
            distancia[j][i] = distancia[i][j];
        }
    }
    fclose(arquivo);
    libera_vetor(vet_x);
    libera_vetor(vet_y);
}


/* le um arquivo no formato "numero_cidades melhor_fo_literatura" */
void obter_parametros_pcv(char nomearq[], int *n, float *melhor_fo_lit) {

    FILE *arquivo;
    int num_cidades;
    float melhor_fo_literatura;

    arquivo = fopen(nomearq, "r");
    if (!arquivo) {
        cout << "O arquivo " << nomearq << "nao pode ser aberto";
        getchar();
        exit(1);
    }
    fscanf(arquivo, "%d %f", &num_cidades, &melhor_fo_literatura);

    *n = num_cidades;
    *melhor_fo_lit = melhor_fo_literatura;

    fclose(arquivo);
}


void imprime_fo(char nomearq[], float tempo, float fo, int iteracao) {
    FILE *arquivo;
    arquivo = fopen(nomearq, "a+");

    if (!arquivo) {
        cout << "O arquivo " << nomearq << "nao pode ser aberto";
        getchar();
        exit(1);
    }
    fprintf(arquivo, "%8.5f\t  %4d\t  %7.2f\n", tempo, iteracao, fo);
    fclose(arquivo);
}

void imprime_fo_viz(char nomearq[], float tempo, float fo, int iteracao, int viz_i, int viz_j) {
    FILE *arquivo;
    arquivo = fopen(nomearq, "a+");

    if (!arquivo) {
        cout << "O arquivo " << nomearq << "nao pode ser aberto";
        getchar();
        exit(1);
    }
    fprintf(arquivo, "%8.5f\t  %4d\t  %d\t %d\t %7.2f\n", tempo, iteracao, viz_i, viz_j, fo);
    fclose(arquivo);
}

/* le um arquivo no formato i, valor */
void le_arq_vetor(char nomearq[], int *vetor) {
    int j,
            valor;
    FILE *arquivo;

    arquivo = fopen(nomearq, "r");
    if (!arquivo) {
        cout << "O arquivo " << nomearq << "nao pode ser aberto";
        getchar();
        exit(1);
    }
    while (!feof(arquivo)) {
        fscanf(arquivo, "%d, %d", &j, &valor);
        vetor[j] = valor;
    }
    fclose(arquivo);
}


/* Nesta leitura, vetor[j] = valor para todo j=0...n */
void le_arq_vetor_denso(char nomearq[], int *vetor) {
    int j,
            valor;
    FILE *arquivo;

    arquivo = fopen(nomearq, "r");
    if (!arquivo) {
        cout << "O arquivo " << nomearq << "nao pode ser aberto";
        getchar();
        exit(1);
    }
    j = 0;
    while (!feof(arquivo)) {
        fscanf(arquivo, "%d", &valor);
        vetor[j] = valor;
        j++;
    }
    fclose(arquivo);
}


void limpa_arquivo(char nomearq[]) {
    FILE *arquivo;
    arquivo = fopen(nomearq, "w");
    if (!arquivo) {
        cout << "O arquivo " << nomearq << "nao pode ser aberto";
        getchar();
        exit(1);
    }
    fclose(arquivo);
}


