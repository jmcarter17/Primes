#include "PrimeFactorizer.h"

void PrimeFactorizer::factor(int number) {
    factors.clear();

    for (int test = 2 ; number > 1 ; test++)
        for ( ; number % test == 0 ; number /= test)
            factors.push_back(test);

}

std::vector<int> PrimeFactorizer::getFactors() {
    return factors;
}

int PrimeFactorizer::sumOfPrimes() {
    int sum = 0;

    for (auto it = factors.begin(); it != factors.end() ; ++it) {
        sum += *it;
    }

    return sum;
}