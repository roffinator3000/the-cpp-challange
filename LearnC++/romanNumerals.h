//
// Created by roffinator on 02.04.2022.
//

#ifndef NUMERICTOROMAN_H
#define NUMERICTOROMAN_H

class romanNumerals
{
public:
    romanNumerals();
    romanNumerals(int number);
    romanNumerals(std::string roman);
    
    static std::string numericToRoman( int number, bool printIt = true);
    static int romanToNumeric( std::string roman, bool printIt = true);
    
    void setNumericValue( int numericValue );
    void setRomanValue( const std::string &romanValue );
    int getNumericValue() const;
    const std::string &getRomanValue() const;

private:
// I,II,III, V, X, L, C, D, M
    int numericValue;
    std::string romanValue;
};

#endif //NUMERICTOROMAN_H
