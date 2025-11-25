#pragma once

#pragma once
#include <vector>
#include "StepData.h"

class SolverResult {
public:
    std::vector<StepData> steps;
    int dimension;
    int step;
    std::vector<double> max_local_errs;
    double max_global_err;
    double max_h;
    double min_h;
    double x_max_h;
    double x_min_h;
    int total_halvings;
    int total_successes;
    double boundary_distance;

    SolverResult() : dimension(0), step(0), max_global_err(0), max_h(0), min_h(0),
        x_max_h(0), x_min_h(0), total_halvings(0), total_successes(0),
        boundary_distance(0) {}
};