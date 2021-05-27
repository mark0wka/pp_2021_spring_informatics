// Copyright 2021 Bulychev Vladislav
#ifndef MODULES_TASK_4_BULYCHEV_V_INT_REC_INT_REC_STD_H_
#define MODULES_TASK_4_BULYCHEV_V_INT_REC_INT_REC_STD_H_

#include <vector>
#include <thread>
#include <algorithm>

double Calculation_Seq(std::vector<double> a, std::vector<double> b,
    int n, double(*f)(std::vector<double>));
double Calculation_Std(std::vector<double> a, std::vector<double> b,
    int n, double(*f)(std::vector<double>));

#endif  // MODULES_TASK_4_BULYCHEV_V_INT_REC_INT_REC_STD_H_
