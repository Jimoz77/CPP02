#include "Fixed.hpp"

Fixed& Fixed::operator=(const Fixed& ref)
{
    std::cout << "Copy assignment operator called\n";
    this->value = ref.value;
    return(*this);
}

bool Fixed::operator>(const Fixed& ref)
{
    if(this->value > ref.value)
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed& ref)
{
    if(this->value < ref.value)
        return (true);
    return(false);
}

bool Fixed::operator>=(const Fixed& ref)
{
    if(this->value >= ref.value)
        return(true);
    return(false);
}

bool Fixed::operator<=(const Fixed& ref)
{
    if(this->value <= ref.value)
        return(true);
    return(false);
}

bool Fixed::operator==(const Fixed& ref)
{
    if(this->value == ref.value)
        return(true);
    return(false);
}

bool Fixed::operator!=(const Fixed& ref)
{
    if(this->value != ref.value)
        return(true);
    return(false);
}

Fixed Fixed::operator+(const Fixed& ref)
{
    Fixed result;

    result.value = this->value + ref.value;
    return (result);
}

Fixed Fixed::operator-(const Fixed& ref)
{
    Fixed result;

    result.value = this->value - ref.value;
    return (result);

}

Fixed Fixed::operator*(const Fixed& ref)
{
    Fixed result;

    result.value = (this->value * ref.value) >> fractBits;
    return (result);
}

Fixed Fixed::operator/(const Fixed& ref)
{
    Fixed result;

    result.value = (this->value << fractBits) / ref.value;
    return (result);

}



Fixed& Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->value++;
    return (temp);
}

Fixed& Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->value--;
    return (temp);
}



Fixed& Fixed::min(Fixed& ref1, Fixed& ref2)
{
    if(ref1.value < ref2.value)
        return(ref1);
    return(ref2);
}
const Fixed& Fixed::min(const Fixed& ref1, const Fixed& ref2)
{
    if(ref1.value < ref2.value)
        return(ref1);
    return(ref2);
}
Fixed& Fixed::max(Fixed& ref1, Fixed& ref2)
{
    if(ref1.value > ref2.value)
        return(ref1);
    return(ref2);
}
const Fixed& Fixed::max(const Fixed& ref1, const Fixed& ref2)
{
    
    if(ref1.value > ref2.value)
        return(ref1);
    return(ref2);
}






Fixed::Fixed( void )
{
    std::cout << "Default constructor called\n";
    this->value = 0;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called\n";
    this->value = nbr << fractBits;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called\n";
    this->value = roundf(nbr * (1 << fractBits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(value) / static_cast<float>( 1 << fractBits));
}

int Fixed::toInt( void ) const
{
    return (value / (1 << fractBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& ref)
{
    os << ref.toFloat();
    return(os);
}




Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}