//
// Created by joao on 19/11/2021.
//

#ifndef METAHEURISTICBIB_SA_H
#define METAHEURISTICBIB_SA_H

#include <vector>

float SA(int n, std::vector<int> &s, float **d,
         float alpha, int SAmax, double temp_inicial,
         double temp_final);

float temperaturaInicial(int n, std::vector<int> &s, float **d,
                         float beta, float gama, float SAmax,
                         double temp_inicial);


#endif//METAHEURISTICBIB_SA_H
