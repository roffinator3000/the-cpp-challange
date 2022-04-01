//
//  amicableNumbers.cpp
//  LearnC++
//
//  Created by Niclas Wolf on 28.03.22.
//

#include "amicableNumbers.hpp"
#include "abundantNumbers.hpp"

void amicableNumbers(int limit)
{
    list<int> anlist;
    
    for(int i = 1; i <= limit; ++i)
    {
        int sodi = sumOfProperDivisors(i);
        int soda = sumOfProperDivisors(sodi);
        
        if((i == soda) && (i != sodi))
        {
            int oldCount = (int)anlist.size();
            anlist.push_front(i);
            anlist.unique();
            int newCount = (int)anlist.size();
            
            if(oldCount == newCount)
            {
                anlist.remove(i);
            }
            else
            {
                anlist.push_front(sodi);
                cout << "The numbers " << i << " and " << sodi << " are a amicable pair.\n";
            }
            
        }
    }
    cout << flush;
}
