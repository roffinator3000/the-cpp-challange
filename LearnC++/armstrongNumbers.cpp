//
//  armstrongNumbers.cpp
//  LearnC++
//
//  Created by Niclas Wolf on 30.03.22.
//

#include "armstrongNumbers.hpp"
#include <math.h>
using namespace std;

void armstrongNumbers()
{
    for(int i = 0; i <= 9; ++i)
    {
        int ic = pow(i,3);
        int ia = (i*100);
        
        for(int k = 0; k <= 9; ++k)
        {
            int kc = pow(k,3);
            int ka = (k*10);
            
            for(int m = 0; m <= 9; ++m)
            {
                int sumOfCubes = ic+kc+(pow(m,3));
                int actualNumber = ia+ka+(m);
                
                if(sumOfCubes == actualNumber && 99 < actualNumber)
                {
                    cout << "The number " << actualNumber << " is a armstrong number.\n";
                }
                
            }
        }
    }
    cout << flush;
}
