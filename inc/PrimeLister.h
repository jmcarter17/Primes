//
// Created by Jean-Michel Carter on 2016-02-22.
//

#ifndef PRIMES_PRIMELISTER_H
#define PRIMES_PRIMELISTER_H

#include <list>


class PrimeLister {
public:
    void sieve(int number);
    std::list<int> getList();
    unsigned long sum();
private:
    std::list<int> listOfPrimes;
};


#endif //PRIMES_PRIMELISTER_H
