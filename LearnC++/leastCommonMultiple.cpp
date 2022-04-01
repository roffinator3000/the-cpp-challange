//
//  leastCommonMultiple.cpp
//  LearnC++
//
//  Created by Niclas Wolf on 28.03.22.
//

#include "leastCommonMultiple.hpp"
#include "greatestDivisor.hpp"

int leastCommonMultiple(int first, int second)
{
    int product = first * second;
    int gcd = greatestCommonDivisor(first, second);
    
    int lcm = product / gcd;
    
    std::cout << "The least common multiple is " << lcm << std::endl;
    return lcm;
}
