//
// Created by Jean-Michel Carter on 2016-02-22.
//

#ifndef PRIMES_PRIMELISTER_H
#define PRIMES_PRIMELISTER_H


class PrimeLister {
public:
    void listPrimes(int number);
    std::vector<int> getList();
private:
    std::vector<int> listOfPrimes;
};


#endif //PRIMES_PRIMELISTER_H
