#ifndef PRIMES_PRIMEFACTORIZER_H
#define PRIMES_PRIMEFACTORIZER_H

#include <vector>

class PrimeFactorizer {
public:
    std::vector<int> getFactors();
    void factor(int number);
    int sumOfPrimes();
private:
    std::vector<int> factors;

};


#endif //PRIMES_PRIMEFACTORIZER_H
