#include "Fixed.hpp"


int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    
    if(a < b)
        std::cout << "b est plus grand\n";
    if(a > b)
        std::cout << "a est plus grand\n";
    return 0;
}