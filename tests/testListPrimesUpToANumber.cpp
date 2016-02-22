#include <CppUTest/TestHarness.h>
#include <vector>
#include "PrimeLister.h"

TEST_GROUP(PrimeLister){
    PrimeLister pl;
};

TEST(PrimeLister, List_Of_Primes_Up_To_2_Is_2){
    std::vector<int> listOfPrimes;
    pl.listPrimes(2);
    listOfPrimes = pl.getList();
    std::vector<int> testList = {2};
    CHECK_EQUAL(testList.size(), listOfPrimes.size());
    CHECK_EQUAL(testList.at(0), listOfPrimes.at(0));
}