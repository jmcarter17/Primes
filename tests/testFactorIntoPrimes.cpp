#include <CppUTest/TestHarness.h>
#include <vector>
#include "PrimeFactorizer.h"


TEST_GROUP(Factors)
{
    PrimeFactorizer pf;

    void setup(){

    }

    void teardown(){

    }

    void checkFactorsOf(int num, std::vector<int> testFactors){
        pf.factor(num);
        std::vector<int> factors = pf.getFactors();
        CHECK_EQUAL(factors.size(), testFactors.size());
        for (int i = 0; i < factors.size(); ++i) {
            CHECK_EQUAL(factors.at(i), testFactors.at(i));
        }
    }
};

TEST(Factors, Factors_Of_O_1_or_Negative_Is_Empty){
    pf.factor(0);
    CHECK_EQUAL(0, pf.getFactors().size());
    pf.factor(1);
    CHECK_EQUAL(0, pf.getFactors().size());
    pf.factor(-1);
    CHECK_EQUAL(0, pf.getFactors().size());
}

TEST(Factors, FactoringNumbers){
    checkFactorsOf(2, {2});
    checkFactorsOf(3, {3});
    checkFactorsOf(4, {2,2});
    checkFactorsOf(5, {5});
    checkFactorsOf(6, {2,3});
    checkFactorsOf(7, {7});
    checkFactorsOf(8, {2,2,2});
    checkFactorsOf(9, {3,3});

    checkFactorsOf(2*3*3*5*7*11*13*31, {2,3,3,5,7,11,13,31});
}


TEST_GROUP(SumOfFactors)
{
    PrimeFactorizer pf;

    void setup(){

    }

    void teardown(){

    }

    void checkSumForNumber(int number, int sum){
        pf.factor(number);
        CHECK_EQUAL(sum, pf.sumOfPrimes());
    }

};

TEST(SumOfFactors, Sum_is_computed_properly){
    checkSumForNumber(2, 2);
    checkSumForNumber(9, 6);
    checkSumForNumber(2*3*5*13*31, 2+3+5+13+31);
}

TEST(SumOfFactors, Sum_for_up_to_a_number_is_computed_properly){
    pf.factor(2);
}
