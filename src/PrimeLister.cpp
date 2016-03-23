//
// Created by Jean-Michel Carter on 2016-02-22.
//

#include "PrimeLister.h"
#include <list>

void PrimeLister::sieve(int number) {
    listOfPrimes.clear();

    for (int i = 2; i <= number; ++i) {
            listOfPrimes.push_back(i);
    }

    for (auto i = listOfPrimes.begin(); i != listOfPrimes.end(); ++i) {
        auto j = next(i);
        while (j != listOfPrimes.end()) {
            if ((*j)%(*i) == 0)
                listOfPrimes.erase(j++);
            else
                ++j;
        }
    }
}

std::list<int> PrimeLister::getList(){
    return listOfPrimes;
}

unsigned long PrimeLister::sum(){
    unsigned long result = 0;
    for (auto i = listOfPrimes.begin(); i != listOfPrimes.end(); ++i) {
        result += (*i);
    }

    return result;
}

