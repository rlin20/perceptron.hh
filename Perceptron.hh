#ifndef __PARAMS__Perceptron__
#define __PARAMS__Perceptron__

class Perceptron;

#include <cstddef>
#include "base/types.hh"

#include "params/BranchPredictor.hh"

struct PerceptronParams
    : public BranchPredictorParams
{
    Perceptron * create();
    size_t globalPredictorSize;
    size_t numThreads;
};

#endif // __PARAMS__PerceptronLocalBP__