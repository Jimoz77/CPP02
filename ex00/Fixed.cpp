#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->value = 0;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called\n";
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& ref)
{
    std::cout << "Copy assignment operator called\n";
    this->value = ref.value;
    setRawBits(getRawBits());
    return(*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

