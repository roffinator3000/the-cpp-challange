//
//  abundantNumbers.cpp
//  LearnC++
//
//  Created by Niclas Wolf on 28.03.22.
//

#include "abundantNumbers.hpp"

int sumOfProperDivisors(int number)
{
    int sumOfDividers = 0;
    
    for(int k = 1; k < number; ++k)
        if((number % k) == 0)
            sumOfDividers += k;
        
    return sumOfDividers;
}

void abundantNumbers(int limit)
{    
    for(int i = 1; i <= limit; ++i)
    {
        int sumOfDividers = sumOfProperDivisors(i);
        
        if(sumOfDividers > i)
        {
            cout << "The number " << i << " is a abundant number with the sum of proper divisors " << sumOfDividers <<".\n";
        }
    }
    cout << flush;
}


