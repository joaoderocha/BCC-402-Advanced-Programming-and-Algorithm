//
// Created by joao on 19/11/2021.
//

#ifndef METAHEURISTICBIB_GRASP_H
#define METAHEURISTICBIB_GRASP_H

#include <vector>

float GRASP(int n, std::vector<int> &s, float **d, float alpha, int GRASP_max, void (*funcao_construcao)(int, std::vector<int>&, float**, float));

/* GRASP REATIVO */
float R_GRASP(int n, std::vector<int> &s, float **d, float alpha, int GRASP_max, void (*funcao_construcao)(int, std::vector<int>&, float**, float));

#endif//METAHEURISTICBIB_GRASP_H
