#define __FIXED_H__
#ifdef __FIXED_H__

#include <iostream>


class Fixed
{
private:
    int value;
    static const int fractBits = 8;
public:
    Fixed(/* args */);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& ref);
    int getRawBits( void ) const; 
    void setRawBits( int const raw );
    ~Fixed();
};












#endif