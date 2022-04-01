//
//  primes.cpp
//  LearnC++
//
//  Created by Niclas Wolf on 28.03.22.
//

#include "primes.h"

void largestPrime(int limit)
{
    auto primes = generatePrimes(limit);
    cout << "The largest prime below the given limit is " << primes.back() << endl;
}

vector<int> generatePrimes(int limit)
{
    if(limit <= 2)
    {
        cout << "There are no primes smaller than " << limit ;
        return vector<int>{};
    }
    
    vector<int> primes{2};
    
    for(int i = 3; i < limit; i += 2)
    {
        for(auto k = primes.begin(); k != primes.end(); ++k)
            if(!(i % *k))
                goto secondexit;
       
        primes.push_back(i);
    secondexit:
        ;
    }
    return primes;
}

void sexyPrimes(int limit)
{
    vector<int> primes = generatePrimes(limit);
    cout << "\n";
    
    for(auto l = primes.begin(); l != primes.end(); ++l)
    {
        for(auto j = l+1; j != primes.end(); ++j)
            if(6 == (*j-*l))
                cout << "The primes " << *l << " and " << *j << " are a pair of sexy primes\n";
        cout << flush;
    }
}

vector<int> primeFactors(int number)
{
    using namespace std;
    vector<int> primeList = generatePrimes(number);
    vector<int> factorList = {};
    vector<int>::iterator it = factorList.begin();
    
    cout << "The number " << number << " is built out of the factors ";
    
    for(vector<int>::reverse_iterator iter = primeList.rbegin();iter != primeList.rend(); ++iter)
    {
        AGAIN:
        if(number % *iter == 0)
        {
            it = factorList.insert(it,*iter);
            number /= *iter;
            goto AGAIN;//--iter;
        }
    }
    std::cout << factorList.at(0);
    for(int i=1; i < factorList.size(); i++)
        std::cout << " * " << factorList.at(i);
    cout << endl;
    
    return factorList;
}
