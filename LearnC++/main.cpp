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
    romanNumerals::romanToNumeric("MIMXXC");
    romanNumerals::romanToNumeric("M IM  X   XC");
    
    cout
        << "\n" << (&test == &test2)
        << "\n" << test << "   " << test2
        << "\n" << (test == test2);
    
    test.setValue("xxliiv");
    test2.setValue("xxxiii");
    cout
        << "\n" << test << "   " << test2
        << "\n" << (test == test2)
        << endl;
    
    cout
        << "\n" << (&test == &test2)
        << "\n" << (test == test2)
        << "\n" << test << "   " << test2;
    
    test.setValue("xxliiv");
    test2.setValue("xxxiii");
    cout << "\n" << test << "   " << test2;
    
    test = test + test2;
    test2 += test;
    cout << "\n" << test << "   " << test2;
    
    return 0;
}
