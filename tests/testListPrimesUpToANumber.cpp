#include <CppUTest/TestHarness.h>
#include <list>
#include "PrimeLister.h"

TEST_GROUP(PrimeLister){
    PrimeLister pl;
    std::list<int> listOfPrimes;

    void setup(){
        listOfPrimes.clear();
    }

    void checkListOfPrimesUpTo(int number, std::list<int> list){
        pl.sieve(number);
        listOfPrimes = pl.getList();
        CHECK_EQUAL(list.size(), listOfPrimes.size());
        auto j = listOfPrimes.begin();
        for (auto i = list.begin(); i != list.end(); ++i) {
            CHECK_EQUAL(*i, *j);
            ++j;
        }
    }
};

TEST(PrimeLister, List_Of_Primes){
    checkListOfPrimesUpTo(1,{});
    checkListOfPrimesUpTo(0, {});
    checkListOfPrimesUpTo(-1, {});
    checkListOfPrimesUpTo(2,{2});
    checkListOfPrimesUpTo(3, {2,3});
    checkListOfPrimesUpTo(10, {2,3,5,7});
}

TEST(PrimeLister, Sum_Of_Primes){
    pl.sieve(10);
    CHECK_EQUAL(17, pl.sum());
    pl.sieve(100);
    CHECK_EQUAL(1060, pl.sum());
    pl.sieve(1000);
    CHECK_EQUAL(76127, pl.sum());
    pl.sieve(10000);
    CHECK_EQUAL(5736396, pl.sum());
    pl.sieve(100000);
    CHECK_EQUAL(454396537, pl.sum());
//    pl.sieve(2000000);
//    CHECK_EQUAL(142913828922, pl.sum());
}