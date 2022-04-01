//
//  sumOfNaturals.cpp
//  LearnC++
//
//  Created by Niclas Wolf on 28.03.22.
//

#include "sumOfNaturals.hpp"

void sumOfNaturals(int limit)
{
    // Variable for the sum
    int sum = 0;
    
    for(int i = 0; i <= limit; i++)
        // Tests if the current value is divisible by 3 or 5
//        if(0 == (i % 3) || 0 == (i % 5))
        if(!(i % 3) || !(i % 5))
            sum += i;
        
        std::cout << "The sum for the given limit is " << sum << std::endl;
}
