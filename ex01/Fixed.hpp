#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>


class Fixed
{
private:
    int value;
    static const int fractBits = 8;
public:
    Fixed();
    Fixed(const int nbr);
    Fixed(const float nbr);
    Fixed(const Fixed& other);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(const Fixed& ref);
    ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& ref );













#endif