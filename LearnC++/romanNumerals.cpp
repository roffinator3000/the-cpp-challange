//
// Created by roffinator on 02.04.2022.
//

#include <iostream>
#include "romanNumerals.h"

std::string numericToRoman(int number)
{
    // roman numerals do not embrace the concept of zero
    if (0 >= number)
    {
        std::cout << "\n";
        return "";
    }
    // I II III  V X L C D M
    std::string newRoman = "";
    while (0 < number)
    {
        if (1000 <= number)
        {
            newRoman += "M";
            number -= 1000;
        }
        else if (900 <= number)
        {
            newRoman += "CM";
            number -= 900;
        }
        else if (500 <= number)
        {
            newRoman += "D";
            number -= 500;
        }
        else if (400 <= number)
        {
            newRoman += "CD";
            number -= 400;
        }
        else if (100 <= number)
        {
            newRoman += "C";
            number -= 500;
        }
        else if (90 <= number)
        {
            newRoman += "XC";
            number -= 90;
        }
        else if (50 <= number)
        {
            newRoman += "L";
            number -= 50;
        }
        else if (40 <= number)
        {
            newRoman += "XL";
            number -= 40;
        }
        else if (10 <= number)
        {
            newRoman += "X";
            number -= 10;
        }
        else if (9 <= number)
        {
            newRoman += "IX";
            number -= 9;
        }
        else if (5 <= number)
        {
            newRoman += "V";
            number -= 5;
        }
        else if (4 <= number)
        {
            newRoman += "IV";
            number -= 4;
        }
        else if (1 <= number)
        {
            newRoman += "I";
            number -= 1;
        }
    }
    
    std::cout << newRoman << "\n";
    return newRoman;
}

int romanToNumeric(std::string roman)
{
    if (roman.empty())
    {
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
    
    std::cout << number << "\n";
    return number;
}
