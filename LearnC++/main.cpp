//
//  main.cpp
//  LearnC++
//
//  Created by Niclas Wolf on 20.02.22.
//

#include <iostream>

#include "primes.h"
#include "greatestDivisor.hpp"
#include "leastCommonMultiple.hpp"
#include "abundantNumbers.hpp"
#include "sumOfNaturals.hpp"
#include "amicableNumbers.hpp"
#include "armstrongNumbers.hpp"
#include "romanNumerals.h"

int main(int argc, const char * argv[])
{
    using namespace std;
    cout << "Hello, World!" << endl;
    
    romanNumerals test = romanNumerals(88);
    romanNumerals test2 = romanNumerals("MMXCVII");
    test.numericToRoman(3994);
    romanNumerals::romanToNumeric("MMXCVII");
    return 0;
}
