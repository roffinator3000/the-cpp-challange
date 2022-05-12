//
// Created by roffinator on 12.05.2022.
//

#ifndef collatzSequence_h
#define collatzSequence_h

#include <vector>

struct cPair { unsigned long num, len; };

unsigned long getNextCollatzNumber(unsigned long num);
//unsigned long _getNextCollatzNumber( unsigned long num);
unsigned int getLengthCollatzSequence(unsigned long num, bool printIt=false);
//std::vector<int> getCollatzSequence(int num);
cPair getLongestCollatzSequence(unsigned int limit, bool printIt=false);

#endif //collatzSequence_h
