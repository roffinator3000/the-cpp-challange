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
        if (0 <= number)
        {
            for (auto const & pair : basicMap)
            {
                while (pair.second <= number)
                {
                    newRoman += pair.first;
                    number -= pair.second;
                }
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
    while (!roman.empty())
    {
        switch ( toupper(roman[0]) )
        {
            case 'M':
                number += 1000;
                roman = roman.erase(0,1);
                break;
            case 'D':
                number += 500;
                roman = roman.erase(0,1);
                break;
            case 'C':
                if (1 < roman.size())
                    if ('M' == toupper(roman[1]))
                    {
                        number += 900;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('D' == toupper(roman[1]))
                    {
                        number += 400;
                        roman = roman.erase(0,2);
                        break;
                    }
                number += 100;
                roman = roman.erase(0,1);
                break;
            case 'L':
                if (1 < roman.size())
                    if ('M' == toupper(roman[1]))
                    {
                        number += 950;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('D' == toupper(roman[1]))
                    {
                        number += 450;
                        roman = roman.erase(0,2);
                        break;
                    }
                number += 50;
                roman = roman.erase(0,1);
                break;
            case 'X':
                if (1 < roman.size())
                    if ('M' == toupper(roman[1]))
                    {
                        number += 990;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('D' == toupper(roman[1]))
                    {
                        number += 490;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('C' == toupper(roman[1]))
                    {
                        number += 90;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('L' == toupper(roman[1]))
                    {
                        number += 40;
                        roman = roman.erase(0,2);
                        break;
                    }
                number += 10;
                roman = roman.erase(0,1);
                break;
            case 'V':
                if (1 < roman.size())
                    if ('M' == toupper(roman[1]))
                    {
                        number += 995;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('D' == toupper(roman[1]))
                    {
                        number += 495;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('C' == toupper(roman[1]))
                    {
                        number += 95;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('L' == toupper(roman[1]))
                    {
                        number += 45;
                        roman = roman.erase(0,2);
                        break;
                    }
                number += 5;
                roman = roman.erase(0,1);
                break;
            case 'I':
                if (1 < roman.size())
                    if ('M' == toupper(roman[1]))
                    {
                        number += 999;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('D' == toupper(roman[1]))
                    {
                        number += 499;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('C' == toupper(roman[1]))
                    {
                        number += 99;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('L' == toupper(roman[1]))
                    {
                        number += 49;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('X' == toupper(roman[1]))
                    {
                        number += 9;
                        roman = roman.erase(0,2);
                        break;
                    }
                    else if ('V' == toupper(roman[1]))
                    {
                        number += 4;
                        roman = roman.erase(0,2);
                        break;
                    }
                number += 1;
                roman = roman.erase(0,1);
                break;
            default:
                roman = roman.erase(0,1);
                break;
        }
    }
    
    if (printIt)
        std::cout << number << "\n";
    return number;
}

void romanNumerals::setNumericValue( int number )
    {
        romanValue = numericToRoman(number, false);
        numericValue = number;
    }

void romanNumerals::setRomanValue( const std::string &roman )
    {
        numericValue = romanToNumeric(roman, false);
        romanValue = roman;
    }

int romanNumerals::getNumericValue() const
    {
        return numericValue;
    }

const std::string &romanNumerals::getRomanValue() const
    {
        return romanValue;
    }
