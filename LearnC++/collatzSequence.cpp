//
// Created by roffinator on 12.05.2022.
//

#include "collatzSequence.h"
#include <iostream>

unsigned long _getNextCollatzNumber( unsigned long num)
    {
        return (0 == num%2) ? num/2 : (3*num)+1;
    }

unsigned long getNextCollatzNumber(unsigned long num)
    {
        return (0 >= num) ? 0 : _getNextCollatzNumber(num);
    }

unsigned int getLengthCollatzSequence(unsigned long num, bool printIt)
    {
        if (0 >= num)
            return 0;
        
        unsigned int count = 1;
        do
        {
            if (printIt)
//                printf("%d\n", num); misprints large numbers
//                std::cout << num << std::endl;
                std::cout << num << "\n";
            num = _getNextCollatzNumber(num);
            ++count;
        } while ( 1 != num );
        return count;
    }

cPair getLongestCollatzSequence(unsigned int limit, bool printIt)
    {
        // num, len
        cPair longest = {1,1};
        for ( unsigned int i = limit; i > 1 ; --i )
        {
            unsigned int newLen = getLengthCollatzSequence(i);
            if ( longest.len < newLen )
                longest = {i, newLen};
            if (printIt && 0 == i%100)
                printf("%d %d\n", i, newLen);
        }
        return longest;
    }
