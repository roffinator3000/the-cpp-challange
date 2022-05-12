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
#include "collatzSequence.h"

int main(int argc, const char * argv[])
{
    using namespace std;
    cout << "Hello, World!" << endl;
    
    cPair longest = getLongestCollatzSequence(1012);
    cPair longerest = getLongestCollatzSequence(1000*1000);
//    cPair longerest = getLongestCollatzSequence(1000*1000, true);
    
    cout
    << "\n" << getNextCollatzNumber(1)
    << "\n" << getNextCollatzNumber(2)
    << "\n" << getNextCollatzNumber(4)
    << "\n" << getLengthCollatzSequence(4)
    << "\n" << getLengthCollatzSequence(5)
    << "\n" << longest.num << " " << longest.len
    << "\n" << longerest.num << " " << longest.len
    << "\n"
    ;
    
//    int len = getLengthCollatzSequence(999167, true);
//    cout
//    << "\n" << len;
    return 0;
}
