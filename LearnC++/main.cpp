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

int main(int argc, const char * argv[]) {
    using namespace std;
    cout << "Hello, World!" << endl;
    
    numericToRoman(3994);
    romanToNumeric("MMXCVII");
    return 0;
}
