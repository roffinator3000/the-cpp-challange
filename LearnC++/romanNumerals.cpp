//
// Created by roffinator on 02.04.2022.
//

#include <iostream>
#include <vector>
#include "romanNumerals.h"

static const std::vector<std::pair<std::string, int>> basicMap =
    {{"M", 1000}, {"CM", 900},
     {"D", 500},  {"CD", 400},
     {"C", 100},  {"XC", 90},
     {"L", 50},   {"XL", 40},
     {"X", 10},   {"IX", 9},
     {"V", 5},    {"IV", 4},
     {"I", 1} };
// I II III  V X L C D M
static const std::vector<std::pair<std::string, int>> extendedMap = {
    {"M",   1000}, {"CM", 900},
     {"CCM", 800},  {"LM", 950},
     {"XXM", 980},  {"XM", 990},
     {"IIM", 998},  {"IM", 999},
    {"D",   500},  {"CD", 400},
     {"CCD", 300},  {"LD", 450},
     {"XXD", 480},  {"XD", 490},
     {"IID", 498},  {"ID", 499},
    {"C",   100},  {"XC", 90},
     {"XXC", 80},
     {"IIC", 98},   {"IC", 89},
    {"L",   50},   {"XL", 40},
     {"XXL", 30},
     {"IIL", 48},   {"IL", 49},
    {"X",   10},   {"IX", 9},
     {"IIX", 8},
    {"V",   5},    {"IV", 4},
     {"IIV", 3},
    {"I", 1} };

romanNumerals::romanNumerals()
    : numericValue(0), romanValue("")
    {}

romanNumerals::romanNumerals(int number)
    {
        setNumericValue(number);
    }

romanNumerals::romanNumerals(std::string roman)
    {
        setRomanValue(roman);
    }

std::string romanNumerals::numericToRoman(int number, bool printIt)
    {
        std::string newRoman = "";
        // roman numerals do not embrace the concept of zero
        
        if (0 > number)
            number *= -1;
        for (auto const & pair : basicMap)
        {
            while (pair.second <= number)
            {
                newRoman += pair.first;
                number -= pair.second;
            }
        }
        
        if (printIt)
            std::cout << newRoman << "\n";
        return newRoman;
    }

int romanNumerals::romanToNumeric(std::string roman, bool printIt)
{
    if (roman.empty())
    {
        if (printIt)
            std::cout << "0";
        return 0;
    }
    
    int number = 0;
    
        for (auto const & pair : extendedMap)
        {
            int len = int(pair.first.length());
            
            while (!roman.empty()) {
                
                for ( int i = 0; i < len; ++i )
                {
                    while (' ' == roman[i])
                        roman = roman.erase(i,1);
    
                    if ( pair.first[i] != toupper(roman[i]))
                        goto nextRomanNum;
                }
    
                number += pair.second;
                roman = roman.erase(0, len);
            }
            nextRomanNum:;
        }
    
    if (printIt)
        std::cout << number << "\n";
    return number;
}

void romanNumerals::setNumericValue( int number )
    {
        if (0 > number)
            number *= -1;
        romanValue = numericToRoman(number, false);
        numericValue = number;
    }
void romanNumerals::setValue( int number )
    { setNumericValue(number);}

void romanNumerals::setRomanValue( const std::string &roman )
    {
        numericValue = romanToNumeric(roman, false);
        romanValue = numericToRoman(numericValue, false);
    }
void romanNumerals::setValue( const std::string &roman )
    { setRomanValue(roman);}

int romanNumerals::getNumericValue() const
    {
        return numericValue;
    }

const std::string &romanNumerals::getRomanValue() const
    {
        return romanValue;
    }
