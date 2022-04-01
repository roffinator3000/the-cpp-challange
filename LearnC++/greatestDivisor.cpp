//
//  greatestDivisor.cpp
//  LearnC++
//
//  Created by Niclas Wolf on 28.03.22.
//

#include "greatestDivisor.hpp"

int greatestCommonDivisor(int first, int second)
{

    for(int i = (first < second ? first : second); i >= 1; --i)
    {
        if(!(first % i) && !(second % i))
        {
            cout << "The greatest common divisor is " << i << endl;
            return i;
        }
    }
    
    cout << "There is no common divisor" << endl;
    return 1;
}
