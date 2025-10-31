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
    bool operator>(const Fixed& ref);
    bool operator<(const Fixed& ref);
    bool operator>=(const Fixed& ref);
    bool operator<=(const Fixed& ref);
    bool operator==(const Fixed& ref);
    bool operator!=(const Fixed& ref);

    Fixed operator+(const Fixed& ref);
    Fixed operator-(const Fixed& ref);
    Fixed operator*(const Fixed& ref);
    Fixed operator/(const Fixed& ref);

    //les 4 increment/decrement
    Fixed& operator++();
    Fixed operator++(int);

    Fixed& operator--();
    Fixed operator--(int);

    static Fixed& min(Fixed& ref1, Fixed& ref2); //pk
    static const Fixed& min(const Fixed& ref1, const Fixed& ref2);//pk
    static Fixed& max(Fixed& ref1, Fixed& ref2);
    static const Fixed& max(const Fixed& ref1, const Fixed& ref2);
    








    ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& ref );













#endif